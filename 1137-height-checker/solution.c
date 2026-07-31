int heightChecker(int* heights, int heightsSize) {
    int expected[heightsSize],count = 0;
    for(int i = 0; i < heightsSize; i++){
        expected[i] = heights[i];
    }
    for(int i = 0; i < heightsSize; i++ ){
	 	for(int j = 0; j < heightsSize - i - 1; j++){
			if(expected[j] > expected[j+1]){
				int temp = expected[j];
				expected[j] = expected[j+1];
				expected[j+1] = temp;
			}	
		}
	}
    for(int i = 0; i < heightsSize; i++){
        if(expected[i] != heights[i]){
            count++;
        }
    }
    return count;
}
