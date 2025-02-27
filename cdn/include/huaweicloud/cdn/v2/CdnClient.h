#ifndef HUAWEICLOUD_SDK_CDN_V2_CdnClient_H_
#define HUAWEICLOUD_SDK_CDN_V2_CdnClient_H_

#include <huaweicloud/cdn/v2/CdnExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cdn/v2/model/BatchCopyDRequestBody.h>
#include <huaweicloud/cdn/v2/model/BatchCopyDomainRequest.h>
#include <huaweicloud/cdn/v2/model/BatchCopyDomainResponse.h>
#include <huaweicloud/cdn/v2/model/BatchCopyErrorRsp.h>
#include <huaweicloud/cdn/v2/model/DownloadRegionCarrierExcelRequest.h>
#include <huaweicloud/cdn/v2/model/DownloadRegionCarrierExcelResponse.h>
#include <huaweicloud/cdn/v2/model/DownloadStatisticsExcelRequest.h>
#include <huaweicloud/cdn/v2/model/DownloadStatisticsExcelResponse.h>
#include <huaweicloud/cdn/v2/model/ErrRsp.h>
#include <huaweicloud/cdn/v2/model/ListDomainsRequest.h>
#include <huaweicloud/cdn/v2/model/ListDomainsResponse.h>
#include <huaweicloud/cdn/v2/model/ModifyDomainConfigRequestBody.h>
#include <huaweicloud/cdn/v2/model/SetChargeModesBody.h>
#include <huaweicloud/cdn/v2/model/SetChargeModesRequest.h>
#include <huaweicloud/cdn/v2/model/SetChargeModesResponse.h>
#include <huaweicloud/cdn/v2/model/ShowBandwidthCalcRequest.h>
#include <huaweicloud/cdn/v2/model/ShowBandwidthCalcResponse.h>
#include <huaweicloud/cdn/v2/model/ShowChargeModesRequest.h>
#include <huaweicloud/cdn/v2/model/ShowChargeModesResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainDetailByNameRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainDetailByNameResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainFullConfigRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainFullConfigResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainLocationStatsRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainLocationStatsResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainStatsRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainStatsResponse.h>
#include <huaweicloud/cdn/v2/model/ShowTopDomainNamesRequest.h>
#include <huaweicloud/cdn/v2/model/ShowTopDomainNamesResponse.h>
#include <huaweicloud/cdn/v2/model/ShowTopUrlRequest.h>
#include <huaweicloud/cdn/v2/model/ShowTopUrlResponse.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainFullConfigRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainFullConfigResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cdn::V2::Model;

class HUAWEICLOUD_CDN_V2_EXPORT  CdnClient : public Client
{
public:

    CdnClient();

    virtual ~CdnClient();

    static ClientBuilder<CdnClient> newBuilder();

    // 批量域名复制
    //
    // 批量域名复制接口。
    //  &gt; 将某个加速域名的配置批量复制到其他域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCopyDomainResponse> batchCopyDomain(
        BatchCopyDomainRequest &request
    );
    // 下载区域运营商指标数据表格文件
    //
    // - 下载区域运营商指标数据表格文件。
    // 
    // - 支持下载90天内的指标数据表格。
    // 
    // - 时间跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开。如时间跨度为2022-10-24 00:00:00 到 2022-10-25 00:00:00，表示取 [2022-10-24 00:00:00, 2022-10-25 00:00:00)的统计数据。
    // 
    // - 起始时间、结束时间必须传毫秒级时间戳，起始时间和结束时间必须同时指定。
    // 
    // - 单租户调用频率：10次/min。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadRegionCarrierExcelResponse> downloadRegionCarrierExcel(
        DownloadRegionCarrierExcelRequest &request
    );
    // 下载统计指标数据表格文件
    //
    // - 下载统计指标数据表格文件。
    // 
    // - 支持下载90天内的指标数据。
    // 
    // - 时间跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开。如时间跨度为2022-10-24 00:00:00 到 2022-10-25 00:00:00，表示取 [2022-10-24 00:00:00, 2022-10-25 00:00:00)的统计数据。
    // 
    // - 起始时间、结束时间必须传毫秒级时间戳，起始时间和结束时间必须同时指定。
    // 
    // - 单租户调用频率：10次/min。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadStatisticsExcelResponse> downloadStatisticsExcel(
        DownloadStatisticsExcelRequest &request
    );
    // 查询加速域名
    //
    // 查询加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainsResponse> listDomains(
        ListDomainsRequest &request
    );
    // 设置用户计费模式
    //
    // - 设置用户计费模式。
    // 
    // - 服务区域仅支持mainland_china（国内）
    // 
    // - 计费模式仅支持设置flux（流量），v2及以上客户支持bw（带宽）
    // 
    // - 加速类型仅支持base（基础加速）
    // 
    // - 单租户调用频率：10次/min。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetChargeModesResponse> setChargeModes(
        SetChargeModesRequest &request
    );
    // 查询域名带宽峰值类数据
    //
    // - 查询域名带宽峰值类数据。
    // 
    // - 支持查询90天内的数据。
    // 
    // - 查询时间跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开。如查询2022-10-24 00:00:00 到 2022-10-25 00:00:00 的数据，表示取 [2022-10-24 00:00:00, 2022-10-25 00:00:00)的统计数据。
    // 
    // - 起始时间、结束时间必须传毫秒级时间戳，起始时间和结束时间必须同时指定。
    // 
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、峰值类指标单位统一为bps（比特率），请求数类和状态码类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // 
    // - 单租户调用频率：2次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBandwidthCalcResponse> showBandwidthCalc(
        ShowBandwidthCalcRequest &request
    );
    // 查询用户计费模式
    //
    // - 查询用户计费模式。
    // 
    // - 服务区域仅支持mainland_china（国内，默认）和outside_mainland_china（海外）
    // 
    // - 计费模式状态支持active（已生效），upcoming（待生效）两种状态，默认为active(已生效)
    // 
    // - 加速类型仅支持base（基础加速）
    // 
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowChargeModesResponse> showChargeModes(
        ShowChargeModesRequest &request
    );
    // 查询加速域名详情
    //
    // 加速域名详情信息接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainDetailByNameResponse> showDomainDetailByName(
        ShowDomainDetailByNameRequest &request
    );
    // 查询域名配置接口
    //
    // 查询域名配置接口，支持查询业务类型、服务范围、备注、IPv6开关、回源方式、回源URL改写、高级回源、Range回源、回源跟随、回源是否校验Etag、回源超时时间、回源请求头、HTTPS配置、TLS版本配置、强制跳转、HSTS、HTTP/2、OCSP Stapling、QUIC、缓存规则、状态码缓存时间、防盗链、IP黑白名单、 Use-Agent黑白名单、URL鉴权配置、远程鉴权配置、IP访问限频、HTTP header配置、自定义错误页面配置、智能压缩、请求限速配置、WebSocket配置、视频拖拽。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainFullConfigResponse> showDomainFullConfig(
        ShowDomainFullConfigRequest &request
    );
    // 按区域运营商查询域名统计数据
    //
    // - 支持查询90天内的数据。
    // 
    // - 支持多指标同时查询，不超过5个。
    // 
    // - 最多同时指定20个域名。
    // 
    // - 起始时间和结束时间需要同时指定，左闭右开，毫秒级时间戳，且时间点必须为与查询时间间隔参数匹配的整时刻点。比如查询时间间隔为5分钟时，起始时间和结束时间必须为5分钟整时刻点，如：0分、5分、10分、15分等，如果时间点与时间间隔不匹配，返回数据可能与预期不一致。统一用开始时间表示一个时间段，如：2019-01-24 20:15:00 表示取 [20:15:00, 20:20:00)的统计数据，且左闭右开。
    // 
    // - action取值：location_detail,location_summary
    // 
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、请求数类和状态码类指标单位统一为次数。用于查询指定域名、指定统计指标的区域运营商明细数据。
    // 
    // - 单租户调用频率：15次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainLocationStatsResponse> showDomainLocationStats(
        ShowDomainLocationStatsRequest &request
    );
    // 查询域名统计基础数据
    //
    // - 支持查询90天内的数据。
    // 
    // - 支持多指标同时查询，不超过5个。
    // 
    // - 最多同时指定20个域名。
    // 
    // - 起始时间和结束时间需要同时指定，左闭右开，毫秒级时间戳，且时间点必须为与查询时间间隔参数匹配的整时刻点。比如查询时间间隔为5分钟时，起始时间和结束时间必须为5分钟整时刻点，如：0分、5分、10分、15分等，如果时间点与时间间隔不匹配，返回数据可能与预期不一致。统一用开始时间表示一个时间段，如：2019-01-24 20:15:00 表示取 [20:15:00, 20:20:00)的统计数据，且左闭右开。
    // 
    // - action取值：detail,summary
    // 
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、请求数类和状态码类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // 
    // - 单租户调用频率：15次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainStatsResponse> showDomainStats(
        ShowDomainStatsRequest &request
    );
    // 查询TOP域名
    //
    // - 查询TOP域名。
    // 
    // - 支持查询90天内的数据。
    // 
    // - 查询时间跨度不能超过1天。
    // 
    // - 起始时间和结束时间，左闭右开，必须同时指定。如查询2022-10-24 00:00:00 到 2022-10-25 00:00:00 的数据，表示取 [2022-10-24 00:00:00, 2022-10-25 00:00:00)的统计数据。
    // 
    // - 起始时间、结束时间必须传整点毫秒级时间戳。
    // 
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、请求数类和状态码类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // 
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTopDomainNamesResponse> showTopDomainNames(
        ShowTopDomainNamesRequest &request
    );
    // 查询TOP100 URL明细
    //
    // - 查询TOP100 URL明细。
    // 
    // - 支持查询90天内的数据。
    // 
    // - 查询跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开，需要同时指定。如查询2021-10-24 00:00:00 到 2021-10-25 00:00:00 的数据，表示取 [2021-10-24 00:00:00, 2021-10-25 00:00:00)的统计数据。
    // 
    // - 开始时间、结束时间必须传毫秒级时间戳，且必须为凌晨0点整时刻点，如果传的不是凌晨0点整时刻点，返回数据可能与预期不一致。
    // 
    // - 流量类指标单位统一为Byte（字节）、请求数类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // 
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTopUrlResponse> showTopUrl(
        ShowTopUrlRequest &request
    );
    // 修改域名全量配置接口
    //
    // 修改域名配置接口，支持修改业务类型、服务范围、备注、IPv6开关、回源方式、回源URL改写、高级回源、Range回源、回源跟随、回源是否校验Etag、回源超时时间、回源请求头、HTTPS配置、TLS版本配置、强制跳转、HSTS、HTTP/2、OCSP Stapling、QUIC、缓存规则、状态码缓存时间、防盗链、IP黑白名单、Use-Agent黑白名单、URL鉴权配置、远程鉴权配置、IP访问限频、HTTP header配置、自定义错误页面配置、智能压缩、请求限速配置、WebSocket配置、视频拖拽。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainFullConfigResponse> updateDomainFullConfig(
        UpdateDomainFullConfigRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_CDN_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cdn::V2::CdnClient>;

#endif // HUAWEICLOUD_SDK_CDN_V2_CdnClient_H_

