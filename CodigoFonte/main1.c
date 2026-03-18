#include <stdio.h>
#include "vc.h"   // Certifica-te que tens a biblioteca vc no projeto

// Criar uma imagem binária e gravar para ficheiro
int main(void)
{
    IVC *image;
    int x, y;
    long int pos;

    image = vc_image_new(320, 280, 255, 255);

    if (image == NULL)
    {
        printf("ERROR -> vc_image_new():\nout of memory!\n");
        getchar();
        return 0;
    }
    
    image->data[pos] == 0; // definir a imagem como preto (0)
    for (x = 0; x < image->width; x++)
    {
        for (y = 0; y < image->height; y++)
        {
            pos = y * image->bytesperline + x * image->channels;

            if ((x <= image->width) && (y <= image->height))
            image->data[pos]++; vai 
        }
    }

    vc_write_image("teste.pbm", image);

    vc_image_free(image);

    printf("Press any key to exit...\n");
    getchar();

    return 0;
}