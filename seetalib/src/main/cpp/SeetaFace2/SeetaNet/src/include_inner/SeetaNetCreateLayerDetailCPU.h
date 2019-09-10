#ifndef _SEETANET_CREATE_LAYER_DETAIL_H_
#define _SEETANET_CREATE_LAYER_DETAIL_H_

#include "layers/SeetaNetBaseLayer.h"
#include <map>

#include "SeetaNetLayerType.h"
#include "SeetaNetProto.h"
#include "SeetaNetResource.h"
#include "layers/SeetaNetMemoryDataLayerCPU.h"
#include "layers/SeetaNetConvolutionCPU.h"
#include "layers/SeetaNetReluCPU.h"
#include "layers/SeetaNetPoolingCPU.h"
#include "layers/SeetaNetInnerproductCPU.h"
#include "layers/SeetaNetSoftmaxCPU.h"
#include "layers/SeetaNetConcatCPU.h"
#include "layers/SeetaNetEltwiseCPU.h"
#include "layers/SeetaNetExpCPU.h"
#include "layers/SeetaNetPowerCPU.h"
#include "layers/SeetaNetSpaceToBatchNDCPU.h"
#include "layers/SeetaNetBatchToSpaceNDCPU.h"
#include "layers/SeetaNetBatchNormalizeCPU.h"
#include "layers/SeetaNetScaleCPU.h"
#include "layers/SeetaNetSplitCPU.h"
#include "layers/SeetaNetPreReluCPU.h"
#include "layers/SeetaNetDeconvolutionCPU.h"
#include "layers/SeetaNetCropCPU.h"
#include "layers/SeetaNetSigmoidCPU.h"
#include "layers/SeetaNetReshapeCPU.h"
#include "layers/SeetaNetRealMulCPU.h"
#include "layers/SeetaNetShapeIndexPatchCPU.h"

using namespace seeta;

template <class DataType>
int CreateMemoryDataFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetMemoryDataLayerCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateConvolutionFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetConvolutionCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}


template <class DataType>
int CreateReluFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetReluCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateReshapeFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetReshapeCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreatePoolingFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetPoolingCpu<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateInnerproductionFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetInnerProductCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateSoftmaxFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetSoftMaxCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}


template <class DataType>
int CreateConcatFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetConcatCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateExpFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetExpCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreatePowerFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetPowerCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}


template <class DataType>
int CreateBatchNormliseFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetBatchNormalizeCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateScaleFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetScaleCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateRealMulFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetRealMulCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateSplitFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetSplitCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreatePreReLUFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetPreReluCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}


template <class DataType>
int CreateEltwiseFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetEltwiseCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}


template <class DataType>
int CreateDeconvolutionFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetDeconvolutionCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }
    return 0;
}

template <class DataType>
int CreateCropLayerFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetCropCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }
    return 0;
}

template <class DataType>
int CreateSigmoidFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetSigmoidCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}


template <class DataType>
int CreateSpaceToBatchNDFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetSpaceToBatchNDCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}


template <class DataType>
int CreateBatchToSpaceNDFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetBatchToSpaceNDCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

template <class DataType>
int CreateShapeIndexPatchFunctionCPU( SeetaNetBaseLayer<DataType> *&output_layer, SeetaNet_LayerParameter &layer_param, SeetaNetResource<DataType> *pNetResource )
{
    output_layer = new SeetaNetShapeIndexPatchCPU<DataType>();
    output_layer->Init( layer_param, pNetResource );
    for( int i = 0; i < layer_param.bottom_index.size(); i++ )
    {
        output_layer->bottom_index.push_back( layer_param.bottom_index[i] );
    }
    for( int i = 0; i < layer_param.top_index.size(); i++ )
    {
        output_layer->top_index.push_back( layer_param.top_index[i] );
    }

    return 0;
}

#endif
