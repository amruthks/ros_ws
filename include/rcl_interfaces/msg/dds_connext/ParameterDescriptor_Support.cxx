
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterDescriptor_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "ParameterDescriptor_Support.h"
#include "ParameterDescriptor_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'ParameterDescriptor_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   ParameterDescriptor_TYPENAME

            /* Defines */
            #define TDataWriter ParameterDescriptor_DataWriter
            #define TData       rcl_interfaces::msg::dds_::ParameterDescriptor_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   ParameterDescriptor_TYPENAME

            /* Defines */
            #define TDataReader ParameterDescriptor_DataReader
            #define TDataSeq    ParameterDescriptor_Seq
            #define TData       rcl_interfaces::msg::dds_::ParameterDescriptor_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    ParameterDescriptor_TYPENAME
            #define TPlugin_new  rcl_interfaces::msg::dds_::ParameterDescriptor_Plugin_new
            #define TPlugin_delete  rcl_interfaces::msg::dds_::ParameterDescriptor_Plugin_delete

            /* Defines */
            #define TTypeSupport ParameterDescriptor_TypeSupport
            #define TData        rcl_interfaces::msg::dds_::ParameterDescriptor_
            #define TDataReader  ParameterDescriptor_DataReader
            #define TDataWriter  ParameterDescriptor_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

