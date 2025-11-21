// #include <stdio.h>
// int main () {
//     FILE *file;
//     file = fopen("file.txt", "w");
//     fputs("Hai\n", file);
//     fputs("Namaku Farah", file);
//     fclose(file);
// }



// #include <stdio.h>

// int main()
// {
//   char string[225];
//   FILE *file;
  
//   file = fopen("file.txt", "r");
//   while(fgets(string, sizeof(string), file) != NULL) {
//     printf("%s", string);
//   }
//   fclose(file);
  
//   return 0;
// }



// #include <stdio.h>

// int main()
// {
//   char nama[10];
//   int nilai;
//   FILE *file;
  
//   file = fopen("file.txt", "r");
//   while(fscanf(file, "%s %d", nama, &nilai) != EOF) {
//     printf("%s %d\n", nama, nilai); //nama ga pake & karena array
//   }
//   fclose(file);
  
//   return 0;
// }


#include <stdio.h>

int main() {
  FILE *file = fopen("file.txt", "w");
  if (file == NULL) {
    printf("Gagal membuka file.\n");
    return 1;
  } else {
    int umur = 18;
    float tinggi = 1.45;
    fprintf(file, "Umur: %d tahun\n", umur);
    fprintf(file, "Tinggi: %.2f meter\n", tinggi);

    printf("File berhasil diakses");
    fclose(file);
  }

  return 0;
}