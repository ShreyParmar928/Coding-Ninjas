void intersection(input1, input2, size1, size2) {
    int input3[10000]={0};
   
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(input1[i] == input2[j] && (input2[j] !=input3[j])){
                cout << input2[j] << endl;
                input3[j] = input2[j];
                break;
            }
        }
    }
}
