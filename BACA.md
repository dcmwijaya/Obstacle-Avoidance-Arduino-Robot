[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Obstacle-Avoidance-Arduino-Robot)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Obstacle-Avoidance-Arduino-Robot
<strong>Proyek Tunggal: Robot Arduino Penghindar Rintangan</strong><br><br>
Robot ini bergerak menggunakan roda dan ketika robot bergerak, sensor ultrasonik akan mendeteksi apakah area yang akan dilewati robot aman atau tidak. Jika ada rintangan yang menghalangi, maka robot akan menghindarinya dan mencari jalan lain.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | Arduino Uno R3 |
| Editor Kode | Arduino IDE |
| Driver | USB-Serial CH340 |
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
   https://www.arduino.cc/en/software
   ```

   </td></tr></table><br>

2. USB-Serial CH340

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_Driver
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
<td><img src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/168fadce-b7fe-482e-8f20-cc923b72a8aa" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/3e837e4b-7ee3-4fa1-ab03-e0c281ed5506" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/f8ba2bce-c783-495a-bfde-fd0c961a1ed1" alt="Wiring"></td>
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
<img width="840" src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/b330d739-dc5f-4f18-8b23-a13d512c5ba8" alt="obstacle-avoidance-robot">

<br><br>

## Penafian
Aplikasi ini dibuat dengan menyertakan sumber-sumber dari pihak ketiga. Pihak ketiga di sini adalah penyedia layanan, yang layanannya berupa pustaka, kerangka kerja, dan lain-lain. Saya ucapkan terima kasih banyak atas layanannya. Telah terbukti sangat membantu dan dapat diimplementasikan.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2023 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
