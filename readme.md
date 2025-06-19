# Kegiatan Robotika 

**Nama**: Billy Thierry Maulana Afzaal Faizullah  
**NPM**: 22081010130  
**Kelas**: Robotika A  

---

## Instalasi Arduino IDE

Untuk memulai pemrograman ESP32, kita memerlukan IDE, salah satunya adalah Arduino IDE. Meskipun namanya
arduino, tapi masih bisa digunakan untuk ESP32. Arduino IDE bisa didownload di websitenya langsung (https://www.arduino.cc/en/software/). Setelah selesai menginstal, kita melakukan instalasi lagi di dalam Arduino IDE untuk ESP32. Caranya melalui Menu Tools,
lalu Board, Boards Manager. Cari Board ESP32, lalu install.



## Praktek iTCLab

Pertama yang dilakukan adalah melakukan pengaturan di File > Preferences untuk memasukkan Additional Boards Manager URL (https://dl.espressif.com/dl/package_esp32_index.json). Lalu di kelas, kami disediakan alat untuk menyalakan dan mematikan lampu LED. Kode dibagikan oleh Pak Basuki, lalu kami tinggal mencobanya. Alat tersebut disambungkan ke USB port. Selanjutnya setting board ke DOIT ESP32 DEVKIT V1 dan port "115200" lalu kode diupload ke alat tsb. Otomatis kode program akan langsung berjalan. 

## Praktek iMCLab

Praktek kali ini adalah mencoba alat untuk menggerakkan dinamo. Pertama, Pak Basuki membagikan materi dan source code untuk menjalankan program untuk menggerakkan dinamo. Dinamo tersebut diletakkan disebuah alat, jadi tidak hanya dinamonya saja. Kemudian sama seperti sebelumnya, alat tsb disambungkan ke USB Port lalu kode diupload. Jika berhasil, maka dinamo akan langsung berputar.

## IoT MQTT

Disini kami disediakan alat untuk mendeteksi suhu. Namun kali ini kami belajar untuk menyambungkan alat tsb dengan hp. Untuk menyambungkannya kami mendownload aplikasi IoT MQTT Panel di Google Play Store. Aplikasi ini disambungkan ke MQTT Broker hivemq.com. Kemudian Pak Basuki membagikan source codenya, lalu alat tersebut disambungkan ke USB Port laptop. Melalui aplikasi ini, kita bisa memantau status dari alat tsb, misalnya seperti suhunya berapa. 

## AI Object Detection & Kendali Robot

Untuk persiapan Final Project, Pak Basuki memberikan materi mengenai AI menggunakan Python Jupyter. AI tersebut menggunakan model YOLO (You Only Look Once). Kemudian untuk kendali robot, Pak Basuki membawa robot mobil dengan dua roda utama dan satu roda kecil di depan. Robot tersebut digerakkan menggunakan Arduino IDE. Untuk kontrolnya : 
1. Ketik 1 = Maju
2. Ketik 2 = Belok Kanan 
3. Ketik 3 = Bellok Kiri
4. Ketik 4 = Mundur
5. Ketik 0 = Berhenti

## Final Project Robot 


