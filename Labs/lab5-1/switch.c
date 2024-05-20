int switch_eg(long long x, long long y) {
	long long result = y;
	switch (x) {
	case 20:
		result = result - 5;
	case 21:
		result = result + 19;
		break;
	case 22:
		result += 11;
		break;
	case 24:
	case 26:
		result -= 20;
		break;
	default:
		result = 0;
	}
	return result;
}