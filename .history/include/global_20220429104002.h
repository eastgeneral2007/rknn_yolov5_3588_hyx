// 声明所有需要用到的全局变量

static int Frame_cnt = 0; // 帧的计数
static int Fps = 0; // 帧率
static int Video_width = 0; // 视频的输入宽度
static int Video_height = 0; // 视频的输入高度

static int multi_npu_process_initialized[5] = {0, 0, 0, 0, 0}; // npu初始化完成标志，1为完成，0为未完成
