[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Obstacle-Avoidance-Arduino-Robot?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Personal%20Experiment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Obstacle-Avoidance-Arduino-Robot
Robot adalah alat yang mampu meringankan beban manusia. Robot dapat dikendalikan oleh manusia secara langsung, namun sebenarnya robot juga dapat mengambil keputusannya sendiri jika diberi algoritma cerdas. Jenis robot yang sering dipakai dalam kegiatan sekolah yaitu robot beroda. Robot beroda adalah robot yang bergerak dengan menggunakan roda. Tujuan diadakannya proyek ini adalah untuk mendapatkan kemampuan navigasi yang baik pada robot beroda. Proyek ini telah dilaksanakan dan memakan waktu kurang lebih 3 hari. Robot bergerak lalu sensor ultrasonik akan mendeteksi apakah area yang akan dilewati itu aman atau tidak. Jika ada rintangan yang menghalangi, maka robot akan menghindarinya dan mencari jalan lain. Manfaat dari pembuatan proyek ini tidak lain adalah untuk menambah wawasan. Hasil penelitian menunjukkan bahwa sistem yang dibuat dapat mengurangi resiko terjadinya tabrakan, karena robot ini dapat mengenali objek-objek yang ada di lingkungan sekitarnya dengan baik. 

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | Arduino Uno R3 |
| Editor Kode | Arduino IDE |
| Driver | CH340 USB Driver |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | • Adafruit-Motor-Shield<br>• Servo |
| Aktuator | • Motor Servo SG90 180° (x1)<br>• Motor Gear / Motor DC (x4) |
| Sensor | HC-SR04: Sensor Ultrasonik (x1) |
| Komponen Lainnya | • Kabel USB tipe B - USB tipe A (x1)<br>• Kabel Jumper (1 set)<br>• KCD11: Saklar Pengayun SPST (x1)<br>• Baterai Li-ion 18650 (x2)<br>• Tempat baterai seri 2 slot (x1)<br>• Roda robot (x4)<br>• Motor driver shield L293D (x1)<br>• Kerangka robot mobil (x1) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://bit.ly/ArduinoIDE_Installer
   ```

   </td></tr></table><br>

2. CH340 USB Driver

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_USB_Driver
   ```

   </td></tr></table>
   
<br><br>

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek ini dengan cara klik ``` File ``` -> ``` Open ``` : 

   <table><tr><td width="810">
      
      ``` obstacle_avoidance_robot.ino ```

   </td></tr></table><br>
   
2. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th width="810">

      Cara mengatur board ``` Arduino Uno ```
            
      </th></tr>
      <tr><td>
   
      Klik ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Uno ```

      </td></tr>
   </table><br>
   
3. ``` Instal Pustaka ``` di Arduino IDE

   <table><tr><td width="810">
   
      Unduh semua file zip pustaka. Kemudian tempelkan di: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```

   </td></tr></table><br>

4. ``` Pengaturan Port ``` di Arduino IDE

   <table><tr><td width="810">
   
      Klik ``` Port ``` -> Pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```

   </td></tr></table><br>

5. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

6. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>

7. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` yang lainnya ```.

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>

2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
   
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<img width="840" src="Assets/Documentation/Experiment/Device.jpg" alt="obstacle-avoidance-robot">

<br><br>

## Apresiasi
Jika karya ini bermanfaat bagi anda, maka dukunglah karya ini sebagai bentuk apresiasi kepada penulis dengan mengklik tombol ``` ⭐Bintang ``` di bagian atas repositori.

<br><br>

## Penafian
Aplikasi ini merupakan hasil karya saya sendiri dan bukan merupakan hasil plagiat dari penelitian atau karya orang lain, kecuali yang berkaitan dengan layanan pihak ketiga yang meliputi: pustaka, kerangka kerja, dan lain sebagainya.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2023 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
