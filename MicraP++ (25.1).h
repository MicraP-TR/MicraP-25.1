#pragma once

#ifdef __cplusplus
#error "HATA: SADECE C İÇİN!"
#endif

#include <stdio.h>

// Türkçe keyword makroları
#define EĞER(kosul) if (kosul)
#define DEGIL(kosul) if (!(kosul))
#define DONGU(kosul) while (kosul)
#define BELIRLI_DONGU(kosul) for (kosul)
#define YAPI struct (bina)

// Fonksiyon prototipleri
void YAZ(char a);
void TASI(int *tasinan, int *tasiyan);
void EKLE(int *hedef, int deger);
void BOL(int bolunen, int bolen, int *kalan);

// Inline implementasyonlar
inline void YAZ(char a) { putchar(a); }

inline void TASI(int *tasinan, int *tasiyan) {
    if (tasinan && tasiyan) *tasinan = *tasiyan;
}

inline void EKLE(int *hedef, int deger) {
    if (hedef) *hedef += deger;
}

inline void BOL(int bolunen, int bolen, int *kalan) {
    if (bolen != 0 && kalan) *kalan = bolunen % bolen;
}
