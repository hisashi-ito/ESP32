# DHT22 とESP32を利用した温度・湿度センサー
DHT22(温度センサー・秋月電子で９００円ぐらいした）とESP32を連携させて温度・湿度情報をセンシングし結果をwebサービスの ambidata.io　へ送って温度・湿度を可視化する。

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

