// sub_181EBB120
// rva 0x01ebb120  size 182  section .text  group text
// window base 0x181ebb120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBB120(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 result; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  char v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+18h] [rbp-10h]
  __int64 v28; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v11 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v25);
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
    return sub_181EBB1E0(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 40);
    v13 = v12 + 32;
    if ( (unsigned __int64)(v12 + 32) > *(_QWORD *)(v11 + 32) )
    {
      return sub_181EBB1AB(a1, a2, a3: v12, a4, a5, a6: v13, a7, a8, a9, a10);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v13;
      *(_DWORD *)v12 = 34090808;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      v28 = v10 + 376658792;
      v27 = a5;
      v26 = v12;
      MEMORY[0x1853F1120](a1, a2, a3: v12, a4: v12, a5, a6: v10);
      result = sub_181EBA520(a1: v15, a2: v16, a3: v28, a4: v14, a5: v26, a6: v17, a7: v25);
      if ( *(int *)(v11 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
  }
  return result;
}
