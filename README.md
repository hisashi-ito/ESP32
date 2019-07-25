# ESP32　

<p align="center">
<img src="https://user-images.githubusercontent.com/8604827/61838732-a154f280-aec5-11e9-8a4f-1753364755c8.png" width="250px">
</p>

#### 1. はじめに  
本リポジトリは ESP32-WROOM-32シリーズのマイコンを利用し、様々なIoT 的なプロダクトを作成するリポジトリ。ディレクトリ構成は以下の通り

#### 2. ディレクトリ構成  
* temperature
DHT22温度、湿度センサーを利用して温度を計測し、Webサービス(ambidata.io)へデータを送信し温度、湿度変化を可視化する。

#### 3. git clone 方法

* clone URLに直書き
```
$ git clone https://github.com/hisashi-ito/ESP32.git
```
* ネットワーク設定が完了しているが、通信できない場合は以下のnssをupdatする。  
```
$ sudo yum update -y nss
