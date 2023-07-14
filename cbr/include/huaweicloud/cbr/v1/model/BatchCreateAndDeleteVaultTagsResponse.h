
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchCreateAndDeleteVaultTagsResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchCreateAndDeleteVaultTagsResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BatchCreateAndDeleteVaultTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchCreateAndDeleteVaultTagsResponse();
    virtual ~BatchCreateAndDeleteVaultTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateAndDeleteVaultTagsResponse members


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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchCreateAndDeleteVaultTagsResponse_H_
