
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_DownloadRegionCarrierExcelResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_DownloadRegionCarrierExcelResponse_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  DownloadRegionCarrierExcelResponse
    : public ModelBase, public HttpResponse
{
public:
    DownloadRegionCarrierExcelResponse();
    virtual ~DownloadRegionCarrierExcelResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DownloadRegionCarrierExcelResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_DownloadRegionCarrierExcelResponse_H_
