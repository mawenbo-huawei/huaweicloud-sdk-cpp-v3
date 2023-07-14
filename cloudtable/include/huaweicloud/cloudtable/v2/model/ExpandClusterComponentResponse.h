
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ExpandClusterComponentResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ExpandClusterComponentResponse_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  ExpandClusterComponentResponse
    : public ModelBase, public HttpResponse
{
public:
    ExpandClusterComponentResponse();
    virtual ~ExpandClusterComponentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExpandClusterComponentResponse members


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

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ExpandClusterComponentResponse_H_
