# DHT22 とESP32を利用した温度・湿度センサー
DHT22(温度センサー・秋月電子で1400円ぐらいした）とESP32を連携させて温度・湿度情報をセンシングし結果をwebサービスの ambidata.io　へ送って温度・湿度を可視化する。

## 部品
1. [ESP32-DevKitC ESP-WROOM-32 開発ボード](http://akizukidenshi.com/catalog/g/gM-11819/)  
よくわからんのでとりあえず、開発ボードのほうがいいやとおもって秋月電子で買ってきた。
1.　[温湿度センサ　モジュール　ＡＭ２３０２](http://akizukidenshi.com/catalog/g/gM-07002/)
よくわからんのでとりあえず、温度センサーって書いてあったの秋月電子で買ってきた。
1. [ブレッドボード](http://akizukidenshi.com/catalog/g/gP-00315/)  
ブレッドボードは必要
1. ジャンパーワイヤー（おす）  
10本ぐらいあればよい。
1. 10KΩ抵抗  
貰った。

## 作り方  
基本的にすべてリンクを参考にする。  
1. ARDUINO IDE のインストール  
https://www.arduino.cc/en/Main/Software  
IDEをダウンロードしてインストールする。
1. ESP32 のライブラリのインストール  
https://lastminuteengineers.com/esp32-arduino-ide-tutorial/  
上記ページを参考に実施する
1. 温度センサーのライブラリ(DHTlib)をIDEへインストールする。  
https://lastminuteengineers.com/dht11-dht22-arduino-tutorial/  
上記のページを参考に実施する。
1. 配線をする
<p align="center">
<img src="https://user-images.githubusercontent.com/8604827/61839365-3eb12600-aec8-11e9-9696-5d39e3d453d9.png" width="450px">
</p>
https://lastminuteengineers.com/esp32-dht11-dht22-web-server-tutorial/
上記の配線の通り配線する。ESP32はブレッドボードにしっかりと押し込んではめる。実際に作業するとこのような状態に...    
<p align="center">
<img src="https://user-images.githubusercontent.com/8604827/61839765-cc414580-aec9-11e9-8b22-3e8731fe305a.jpg" width="450px">
</p>
5. IDEでコードを作成する  

https://lastminuteengineers.com/esp32-dht11-dht22-web-server-tutorial/  
https://ambidata.io/docs/esp8266/  

を２つの合わせて割るような感じで作る。ここで Ambient に関しては事前にユーザ登録を実施してチャネルIDとwriteIDを取得しておく必要がある。またコードはセンサーが違うものを利用しているので、DHTlibで同じ処理を書き直す感じで記述する。  `temperature.ino` として保存します。　　

6. IDEで転送する。  

7. ambidataで確認する  
以下のように温度湿度がリアルタイムで[可視化](https://ambidata.io/ch/channel.html?id=12924)できる。
<p align="center">
<img src="https://user-images.githubusercontent.com/8604827/61840500-57233f80-aecc-11e9-9f1b-6807a0097c71.jpg" width="750px">
</p>

