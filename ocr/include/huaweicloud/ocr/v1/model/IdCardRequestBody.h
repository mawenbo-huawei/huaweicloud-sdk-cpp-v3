
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardRequestBody_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  IdCardRequestBody
    : public ModelBase
{
public:
    IdCardRequestBody();
    virtual ~IdCardRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IdCardRequestBody members

    /// <summary>
    /// 与url二选一  图像数据，base64编码，要求base64编码后大小不超过10MB。图片最小边不小于15px，最长边不超过8000px。支持JPEG、JPG、PNG、BMP、TIFF格式。  图片文件Base64编码字符串，点击[这里](https://support.huaweicloud.com/ocr_faq/ocr_01_0032.html)查看详细获取方式。   
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    ///  - front：身份证正面。 - back：身份证背面。  &gt; 说明： 如果参数值为空或无该参数，系统自动识别，建议填写，准确率更高。 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 返回校验身份证号等信息的开关，默认false，可选值如下所示：  - true：返回校验信息  - false：不返回校验信息 
    /// </summary>

    bool isReturnVerification() const;
    bool returnVerificationIsSet() const;
    void unsetreturnVerification();
    void setReturnVerification(bool value);

    /// <summary>
    /// 识别到的文字块的区域位置信息。可选值包括：  - true：返回各个文字块区域  - false：不返回各个文字块区域  如果无该参数，系统默认不返回文字块区域。如果输入参数不是Boolean类型，则会报非法参数错误。 
    /// </summary>

    bool isReturnTextLocation() const;
    bool returnTextLocationIsSet() const;
    void unsetreturnTextLocation();
    void setReturnTextLocation(bool value);

    /// <summary>
    /// 返回判断身份证图像是否经过翻拍的开关，默认false，可选值如下所示：  - true ：返回身份证图像是否经过翻拍  - false：不返回身份证图像是否经过翻拍 
    /// </summary>

    bool isDetectReproduce() const;
    bool detectReproduceIsSet() const;
    void unsetdetectReproduce();
    void setDetectReproduce(bool value);

    /// <summary>
    /// 返回判断身份证图像是否是黑白复印件的开关，默认false，可选值如下所示：  - true ：返回身份证图像是否是复印件  - false : 不返回身份证图像是否是复印件             
    /// </summary>

    bool isDetectCopy() const;
    bool detectCopyIsSet() const;
    void unsetdetectCopy();
    void setDetectCopy(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string side_;
    bool sideIsSet_;
    bool returnVerification_;
    bool returnVerificationIsSet_;
    bool returnTextLocation_;
    bool returnTextLocationIsSet_;
    bool detectReproduce_;
    bool detectReproduceIsSet_;
    bool detectCopy_;
    bool detectCopyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardRequestBody_H_
