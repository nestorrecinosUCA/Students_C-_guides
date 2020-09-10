void countW(string vowels, char word[]){
    int counter = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < count(vowels); j++)
        {
            if(word[i] == vowels[j])
            counter++;
        }
        
    }
    return;
}