package com.lzj.ndk.demo;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import com.lzj.ndk.demo.fromc.OutText;

import butterknife.BindView;
import butterknife.ButterKnife;

/**
 * NDK开发demo
 * 参考
 * https://blog.csdn.net/young_time/article/details/80346631?tdsourcetag=s_pcqq_aiomsg
 */
public class MainActivity extends AppCompatActivity {

    @BindView(R.id.tv)
    TextView tv;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ButterKnife.bind(this);

        init();
    }

    private void init() {

        tv.setText("so内容:"+ OutText.say());
    }
}
