//suurendab indeksiga viidatud massiivi elemendi väärtust ühe võrra. Tagastab uue väärtuse.
int mem_inc();

//vähendab indeksiga viidatud massiivi elemendi väärtust ühe võrra. Tagastab uue väärtuse.
int mem_dec();

//Liigutab indeksit vasakuke (vähendab selle väärtust ühe võrra).
//Kui indeks muutub negatiivseks, siis liiguta see massiivi lõppu. Tagastab indeksi uue väärtuse.
int mem_left();

//Liigutab indeksit paremale (suurendab selle väärtust ühe võrra).
//Kui indeks läheb üle massiivi piiri, siis liiguta indeks massiivi algusesse. Tagastab indeksi uue väärtuse.
int mem_right();

//tagastab antud indeksil oleva väärtuse.
int mem_get();

// salvestab väärtuse antud indeksile ja tagastab selle väärtuse.
int mem_set(char v);

//trükib välja indeksi väärtuse, mälu väärtuse sellel indeksil ja sellele järgnevad 9 väärtust (kui massiivi piir tuleb ette, siis liigu tagasi algusesse)
//Formaadi näidis: index: 10 mem [10 .. 19]: 7 6 10 -12 55 22 0 0 0 0
void mem_printDebug();

int mem_add(int amount);

int mem_move(int numberOfPositions);

void mem_init();