// What is the time, space complexity of following code :

int a =0, b =0;
for (i=0; i<N; i++){
	a = a + rand();
}
for(j = 0; j<M; j++){
	b = b + rand();
}

// Assume that rand() is O(1) time, O(1) space function.



int a = 0, b = 0;
for(i = 0; i <N; j++){
	for(k = 0; k < N; k++){
		b = b + k;
	}
}

for(k = 0; k<N; k++){
	b = b + k;
}

// What is the time complexity of the following code :
int a = 0;
for (i = 0; i<N; i++){
	for(j=N; j> i; j--){
		a = a + i + j;
	}
}