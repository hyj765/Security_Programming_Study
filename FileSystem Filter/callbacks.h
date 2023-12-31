#pragma once
#include<fltKernel.h>
#include<ntddk.h>

FLT_PREOP_CALLBACK_STATUS PreCreateCallback(PFLT_CALLBACK_DATA data, PCFLT_RELATED_OBJECTS FltObjects, PVOID* CompleteContext);
FLT_POSTOP_CALLBACK_STATUS PostCreateCallback(PFLT_CALLBACK_DATA data, PCFLT_RELATED_OBJECTS FltObjects, PVOID* CompletionContext, FLT_POST_OPERATION_FLAGS Flags);

FLT_PREOP_CALLBACK_STATUS PreReadCallback(PFLT_CALLBACK_DATA data, PCFLT_RELATED_OBJECTS FltObjects, PVOID* CompleteContext);
FLT_POSTOP_CALLBACK_STATUS PostReadCallback(PFLT_CALLBACK_DATA data, PCFLT_RELATED_OBJECTS FltObjects, PVOID* CompletionContext, FLT_POST_OPERATION_FLAGS Flags);

FLT_PREOP_CALLBACK_STATUS PreWriteCallback(PFLT_CALLBACK_DATA data, PCFLT_RELATED_OBJECTS FltObjects, PVOID* CompleteContext);
FLT_POSTOP_CALLBACK_STATUS PostWriteCallback(PFLT_CALLBACK_DATA data, PCFLT_RELATED_OBJECTS FltObjects, PVOID* CompletionContext, FLT_POST_OPERATION_FLAGS Flags);

FLT_PREOP_CALLBACK_STATUS PreCloseCallback(PFLT_CALLBACK_DATA data, PCFLT_RELATED_OBJECTS FltObjects, PVOID* CompleteContext);
FLT_POSTOP_CALLBACK_STATUS PostCloseCallback(PFLT_CALLBACK_DATA data, PCFLT_RELATED_OBJECTS FltObjects, PVOID* CompletionContext, FLT_POST_OPERATION_FLAGS Flags);
