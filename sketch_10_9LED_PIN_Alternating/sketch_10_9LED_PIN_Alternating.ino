// LEDをつなぐピンを定義
#define LED_PIN1 9
#define LED_PIN2 10

// 初期化
void setup() {
  // LEDのピンに出力
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

// メインルーブ
void loop() {
  // LED1を点灯
  digitalWrite(LED_PIN1, HIGH);
  // LED2を消灯
  digitalWrite(LED_PIN2, LOW);

  // 500ミリ秒遅延
  delay(500);

  // LED1を消灯
  digitalWrite(LED_PIN1, LOW);
  // LED2を点灯
  digitalWrite(LED_PIN2, HIGH);

  // 500ミリ秒遅延
  delay(500);
}
