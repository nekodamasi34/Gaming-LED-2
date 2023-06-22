# ゲーミングLEDの制御(Pwm)

~~現実逃避で作った~~LEDをゲーミングに光らせるためだけの制御。

NUCLEO-F303K8を使用。

Red→Green→Blue→Redの順番で光る。詳しくは下を参照。

![image](https://github.com/nekodamasi34/Gaming-LED-2/assets/117162125/6eaf26b8-e2f9-4c4c-96d3-4cb7452f16fa)

色が移り変わる速さはAnalogInを用いた可変抵抗で。

## 使用方法(デフォルトの値)

### LED,AnalogInの制御ピン

PwmOut red(D10);
PwmOut green(D11);
PwmOut blue(D12);

AnalogIn s(A0);

### 色が移り変わる速さの調整

void wait_()
{
    wait_ms( s.read() * 10);
}

可変抵抗を使わない場合は10~20ms程度が目安。

## 進捗

6/22 完成。改良/変更の予定はなし。
