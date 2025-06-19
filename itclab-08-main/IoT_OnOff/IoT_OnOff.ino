// Pin konfigurasi
const int gasSensorPin = A0;       // Sensor MQ2 dihubungkan ke pin A0
const int ledMerahPin = 12;        // LED merah untuk peringatan
const int ledHijauPin = 11;        // LED hijau untuk status aman

// Ambang batas gas (ubah sesuai kebutuhan, misal 1000 untuk nilai raw analog)
const int ambangBahaya = 1000;

void setup() {
  pinMode(ledMerahPin, OUTPUT);
  pinMode(ledHijauPin, OUTPUT);
  pinMode(gasSensorPin, INPUT);

  Serial.begin(9600);  // Untuk debugging via Serial Monitor
}

void loop() {
  int nilaiGas = analogRead(gasSensorPin); // Baca nilai dari sensor MQ2

  // Tampilkan nilai ke Serial Monitor
  Serial.print("Nilai gas: ");
  Serial.println(nilaiGas);

  // Jika gas melebihi ambang batas
  if (nilaiGas > ambangBahaya) {
    digitalWrite(ledMerahPin, HIGH);   // Nyalakan LED merah
    digitalWrite(ledHijauPin, LOW);    // Matikan LED hijau
    Serial.println("⚠️ BAHAYA! Kebocoran gas terdeteksi!");
  } else {
    digitalWrite(ledMerahPin, LOW);    // Matikan LED merah
    digitalWrite(ledHijauPin, HIGH);   // Nyalakan LED hijau
    Serial.println("✅ Aman. Tidak ada kebocoran gas.");
  }

  delay(1000); // Tunggu 1 detik sebelum membaca ulang
}
