//
//  main.cpp
//  3
//
//  Created by Gregory Moon on 4/7/15.
//  Copyright (c) 2015 Gregory Moon. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    printf("%s\n", argv[2]);
    FILE *inFile = fopen(argv[2], "r");
    
    if(inFile != NULL){
        int startingBlock, numBlocks, ignore, requestNum;
       
        while(!feof(inFile)){
            fscanf(inFile, "%d", &startingBlock);
            fscanf(inFile, "%d", &numBlocks);
            fscanf(inFile, "%d", &ignore);
            fscanf(inFile, "%d", &requestNum);
            
            int lastBlock = startingBlock + numBlocks;
            
            /*for(int i = startingBlock; i < lastBlock; i++){
                
            }*/
            printf("%d\n", requestNum);
        }
    }
    else
        printf("Not open\n");
    return 0;
}
