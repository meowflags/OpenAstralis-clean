// sub_182757300
// rva 0x02757300  size 198  section .text  group text
// window base 0x182757300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182757300(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  char v32; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+10h] [rbp-28h]
  __int64 v34; // [rsp+18h] [rbp-20h]
  __int64 v35; // [rsp+20h] [rbp-18h]
  __int64 v36; // [rsp+28h] [rbp-10h]
  __int64 (__fastcall *v37)(__int64, __int64, __int64, __int64, __int64, __int64); // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v13 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827573E0(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31);
  }
  else
  {
    v36 = a3;
    if ( *(_BYTE *)(a3 + 36) != 0 )
    {
      v35 = a1;
      v34 = a6;
      v33 = a5;
      sub_1827575A0(a1, a2, a3, a4: a5, a5, a6, a7: v32);
      v19 = *(_QWORD *)(v36 + 8);
      if ( v19 != 0 )
      {
        v37 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))(v19 + v12);
        v20 = sub_1827573E0(a1: v15, a2: v16, a3: v36, a4: v14, a5: v33);
        result = v37(a1: v35, a2: v22, a3: v33, a4: v21, a5: v34, a6: v20);
        if ( *(int *)(v13 + 16) <= 0 )
          return sub_18277F280(a1: v25, a2: v26, a3: v24);
      }
      else
      {
        return sub_1827573A7(a1: v15, a2: v16, a3: v36, a4: v14, a5: v17, a6: v18, a7, a8, a9, a10, a11, a12);
      }
    }
    else
    {
      return sub_182757383(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
  }
  return result;
}
