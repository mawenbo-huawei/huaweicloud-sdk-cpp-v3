
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardRequestBody_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  CambodianIdCardRequestBody
    : public ModelBase
{
public:
    CambodianIdCardRequestBody();
    virtual ~CambodianIdCardRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CambodianIdCardRequestBody members

    /// <summary>
    /// 与url二选一。 图像数据，base64编码。图片尺寸不小于15像素，最长边不超过8192像素，支持JPG/PNG/BMP/TIF格式。
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一。  图片的URL路径，目前仅支持华为云上OBS提供的匿名公开授权访问的URL以及公网URL。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 是否返回头像内容开关，可选值如下所示： - true: 返回身份证头像照片的 base64 编码 - false: 不返回身份证头像照片的 base64 编码 未传入该参数时默认为“false”，即不返回身份证头像照片的 base64 编码。 
    /// </summary>

    bool isReturnPortraitImage() const;
    bool returnPortraitImageIsSet() const;
    void unsetreturnPortraitImage();
    void setReturnPortraitImage(bool value);

    /// <summary>
    /// 是否返回头像坐标的开关，可选值如下所示： - true: 返回身份证头像的位置坐标 - false: 不返回身份证头像的位置坐标 未传入该参数时默认为“false”，即不返回身份证的头像坐标。 
    /// </summary>

    bool isReturnPortraitLocation() const;
    bool returnPortraitLocationIsSet() const;
    void unsetreturnPortraitLocation();
    void setReturnPortraitLocation(bool value);

    /// <summary>
    /// 是否返回身份证类型的开关，可选值如下所示： - true:返回身份证的类型，类型包括身份证原件以及身份证复印件 - false：不返回身份证的类型 
    /// </summary>

    bool isReturnIdcardType() const;
    bool returnIdcardTypeIsSet() const;
    void unsetreturnIdcardType();
    void setReturnIdcardType(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool returnPortraitImage_;
    bool returnPortraitImageIsSet_;
    bool returnPortraitLocation_;
    bool returnPortraitLocationIsSet_;
    bool returnIdcardType_;
    bool returnIdcardTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardRequestBody_H_
