// sub_1815CAB60
// rva 0x015cab60  size 224  section .text  group text
// window base 0x1815cab60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815CAB60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+10h] [rbp-18h]
  int v13; // [rsp+1Ch] [rbp-Ch]
  int v14; // [rsp+20h] [rbp-8h]
  int v15; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = a6;
    v13 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  v8 = a6 - a5;
  if ( a3 == v6 )
  {
LABEL_10:
    MEMORY[0x182771080]();
    return sub_1815CAC40();
  }
  v9 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v9 + 32) > *(_QWORD *)(v7 + 32) )
  {
    v15 = a6 - a5;
    v14 = a6;
    v13 = a5;
    v12 = a3;
    v9 = MEMORY[0x181EAA920](a1, a2, a3: 35862696);
    v8 = v15;
    a6 = v14;
    a5 = v13;
    a3 = v12;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v9 + 32;
    *(_DWORD *)v9 = 35862696;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
  }
  *(_DWORD *)(v9 + 20) = v8;
  *(_DWORD *)(v9 + 16) = a5;
  *(_DWORD *)(v9 + 8) = (unsigned __int64)(a3 - v6) >> 3;
  *(_DWORD *)(v9 + 4) = *(_DWORD *)(a3 + 4);
  if ( *(int *)(v7 + 16) <= 0 )
  {
    v14 = a6;
    v13 = a5;
    v12 = a3;
    MEMORY[0x18277F280]();
  }
  return v9;
}
