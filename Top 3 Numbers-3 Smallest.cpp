// Top 3 Numbers
int first=second=third=INT_MIN;
for(int i=0;i<s.length(),i++) {
	if(s[i]>first) {
		third=second;
		second=first;
		first=s[i];
	}
	else if(s[i]>second) {
		third=second;
		second=s[i];
	}
	else if(s[i]>third) {
		third=s[i];
	}

}

// 3 Smallest
int first=second=third=INT_MAX;
for(int i=0;i<s.length(),i++) {
	if(s[i]<first) {
		third=second;
		second=first;
		first=s[i];
	}
	else if(s[i]<second) {
		third=second;
		second=s[i];
	}
	else if(s[i]<third) {
		third=s[i];
	}

}