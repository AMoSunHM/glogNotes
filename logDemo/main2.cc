#include "glog/logging.h"

//#include "log/log.h"

int main()
{
    google::InitGoogleLogging("test");//使用glog之前必须先初始化库，仅需执行一次，括号内为程序名
    FLAGS_alsologtostderr = true;     //是否将日志输出到文件和stderr
    FLAGS_colorlogtostderr = true;    //是否启用不同颜色显示
/*
    google::SetLogDestination(google::GLOG_INFO, "E:\\logs\\INFO_");  //INFO级别的日志都存放到logs目录下且前缀为INFO_
    google::SetLogDestination(google::GLOG_WARNING, "E:\\logs\\WARNING_");  //WARNING级别的日志都存放到logs目录下且前缀为WARNING_
    google::SetLogDestination(google::GLOG_ERROR, "E:\\logs\\ERROR_");  //ERROR级别的日志都存放到logs目录下且前缀为ERROR_
    google::SetLogDestination(google::GLOG_FATAL, "E:\\logs\\FATAL_");  //FATAL级别的日志都存放到logs目录下且前缀为FATAL_
*/

    
    google::SetLogDestination(google::GLOG_INFO, "/home/casicapollo/Documents/GitHub/glogNotes/logDemo/mylog/");  //INFO级别的日志都存放到logs目录下且前缀为INFO_
    google::SetLogDestination(google::GLOG_WARNING, "/home/casicapollo/Documents/GitHub/glogNotes/logDemo/mylog/");  //WARNING级别的日志都存放到logs目录下且前缀为WARNING_
    google::SetLogDestination(google::GLOG_ERROR, "/home/casicapollo/Documents/GitHub/glogNotes/logDemo/mylog/");  //ERROR级别的日志都存放到logs目录下且前缀为ERROR_
    google::SetLogDestination(google::GLOG_FATAL, "/home/casicapollo/Documents/GitHub/glogNotes/logDemo/mylog/");  //FATAL级别的日志都存放到logs目录下且前缀为FATAL_

    while (1)
    {
        LOG(INFO) << "info";
        LOG(WARNING) << "warning";
        //LOG(ERROR) << "error";
        //LOG(FATAL) << "fatal";       
    }
/*
    while (1)
    {
        AINFO <<"55";
    }
*/    
    LOG(INFO) << "info";
    LOG(WARNING) << "warning";
    LOG(ERROR) << "error";
    /*LOG(FATAL) << "fatal";*/
    google::ShutdownGoogleLogging();  //当要结束glog时必须关闭库，否则会内存溢出
    return 0;
}
// 代码执行后，会在E:\logs文件夹下生成四个log文件 
