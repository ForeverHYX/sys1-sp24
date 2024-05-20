#include<stdio.h>
#include<string.h>

char input_buffer[100];
char name_buffer[100];
int phase_box[16]={14, 6, 8, 10, 3, 2, 13, 5, 11, 4, 9, 12, 7, 0, 1, 15};

int char2num(int c){
    if('0' <= c && c <= '9'){
        return c - '0';
    }else if('a' <= c && c <= 'f'){
        return c - 'a' + 10;
    }else{
        return -1;
    }
}

int phase_1(const char* str){//phase01=0
    int data = char2num(name_buffer[6]);
    int iter = 20;
    while(iter--){
        data = (phase_box[data]^phase_box[(data+3)&0xf]^phase_box[phase_box[data]])&0xf;
    }
    //printf("%d\n",data);
    int ret = 1;
    while(*str){
        if(char2num(*str) == data){
            ret = 0;
            break;
        }
        str++;
    }
    return ret;
}

int phase_2(const char* str){//phase02=ca0
    if(!(str[0] && str[1] && str[2])){
        return 1;
    }
    int data[3] = {char2num(name_buffer[7]),char2num(name_buffer[8]),char2num(name_buffer[9])};
    int iter = 100;
    while(iter--){
        data[0] = (phase_box[phase_box[data[0]]]^phase_box[data[1]]^phase_box[data[2]])&0xf;
        data[1] = (phase_box[data[0]]^phase_box[phase_box[data[1]]]^phase_box[data[2]])&0xf;
        data[2] = (phase_box[data[0]]^phase_box[data[1]]^phase_box[phase_box[data[2]]])&0xf;
    }
    data[1] = (data[1] + char2num(str[0])) & 0xf;
    data[2] = (data[2] + char2num(str[1])) & 0xf;
    int ret = 1;
    if(char2num(str[0])==data[0] && char2num(str[1])==data[1] && char2num(str[2])==data[2]){
        ret = 0;
    }
    return ret;
} 
int phase_3(const char* str){
    int sum = char2num(name_buffer[6])^char2num(name_buffer[7])^char2num(name_buffer[8])^char2num(name_buffer[9]);
    int ret = 1;
    asm volatile(
        "mv t0, %[sum]\n"
        "mv t1, %[str]\n"
        "j phase_3_L1\n"
        "phase_3_L2:\n"
        "xor t0, t0, t2\n"
        "addi t1, t1, 1\n"
        "phase_3_L1:\n"
        "lbu t2, 0(t1)\n"
        "bne t2, zero, phase_3_L2\n"
        "bne t0, zero, phase_3_L3\n"
        "mv %[ret], zero\n"
        "phase_3_L3:\n"
        "nop\n"
        :[ret] "=r" (ret)
        :[sum] "r" (sum),[str] "r" (str)
        :"memory","t0","t1","t2"
    );
    return ret;
}

int main(){
    printf("please input your student ID:");
    scanf("%s",name_buffer);
    if(strlen(name_buffer)!=10){
        printf("please input the true ID.\n");
        return -1;
    }
    for(int i=0;i<10;i++){
        if(name_buffer[i]<'0' || name_buffer[i]>'9'){
            printf("please input the true ID.\n");
            return -1;
        }
    }
    
	printf("Welcome to my fiendish little bomb. You have 3 phases with\n");

	scanf("%s",input_buffer);
	if (phase_1(input_buffer) == 0) {
		printf("Phase 1 defused. How about the next one?\n");
	} else {
		printf("Bomb! You fail to defuse the first bomb!\n");
		return -1;
	}

    scanf("%s",input_buffer);
	if (phase_2(input_buffer) == 0) {
		printf("Phase 2 defused. How about the next one?\n");
	} else {
		printf("Bomb! You fail to defuse the second bomb!\n");
		return -1;
	}
    scanf("%s",input_buffer);
	if (phase_3(input_buffer) == 0) {
		printf("Phase 3 defused.\n");
	} else {
		printf("Bomb! You fail to defuse the third bomb!\n");
		return -1;
    }
}