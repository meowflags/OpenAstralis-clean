// sub_1815C8E00
// rva 0x015c8e00  size 180  section .text  group text
// window base 0x1815c8e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C8E00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  unsigned int v22; // [rsp+1Ch] [rbp-Ch]
  unsigned int v23; // [rsp+20h] [rbp-8h]
  unsigned int v24; // [rsp+24h] [rbp-4h]

  v21 = a3;
  v24 = a5;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815C8EC0(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
  }
  else
  {
    v23 = a6 - a5;
    v22 = a6;
    MEMORY[0x18632A360](a1: v7, a2, a3: a5, a4, a5: a6, a6: a6 - a5);
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v8 + 32) )
    {
      result = MEMORY[0x181EAA920](a1: v9, a2: v10, a3: 35854536);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 24;
      *(_DWORD *)result = 35854536;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    v12 = v23;
    v13 = v21;
    *(_DWORD *)(result + 12) = v24;
    *(_DWORD *)(result + 8) = (unsigned __int64)(v13 - v7) >> 3;
    *(_DWORD *)(result + 4) = v12;
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
