package com.example.zhaojie.ramcontrol;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends Activity implements View.OnClickListener{

    private Button mFillRamButton, mFreeRamButton;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initLayout();
    }

    private void initLayout() {
        mFillRamButton = findViewById(R.id.fill_ram_button);
        mFillRamButton.setOnClickListener(this);
        mFreeRamButton = findViewById(R.id.free_ram_button);
        mFreeRamButton.setOnClickListener(this);
    }

    @Override
    public void onClick(View view) {
        switch (view.getId()) {
            case R.id.fill_ram_button:
                RamControl.getInstance().fillRam(500);
                break;
            case R.id.free_ram_button:
                RamControl.getInstance().freeRam();
                break;
        }

    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
//    public native String stringFromJNI();
}
