int main() {
    //Open the FitnessData_2023.csv File
FILE* file;
int ch;
if (fopen_s(&file,"FitnessData_2023.csv","r")!= 0)
{
    printf("error\n");
    return 1;
}
while ((ch = fgetc(file)) != EOF)
{
    putchar(ch);
}
fclose(file);


return 0;
}
