
void sortZeroesAndOne(int input[], int size)
{
    int start  =0;
    for(int i=0;i<size;i++){
        if(input[i]==0){
            swap(input[start++],input[i]);
        }
    }
}