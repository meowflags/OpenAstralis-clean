// sub_182761560
// rva 0x02761560  size 143  section .text  group text
// window base 0x182761560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182761560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v18; // [rsp+8h] [rbp-10h]
  unsigned int *v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
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
    return sub_182761600();
  }
  else
  {
    v19 = (unsigned int *)a3;
    v18 = a5;
    sub_18275A160(a1, a2, a3, a4: (int)a5, a5, a6);
    v11 = MEMORY[0x18611A960](a1: v9, a2: v10, a3: v6 + 375388656, a4: v8, a5: v18);
    v14 = (unsigned __int64)v19;
    v19[5] = (unsigned __int64)(v11 - v6) >> 3;
    result = *(unsigned int *)v14;
    if ( (result & 2) != 0 )
    {
      v16 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v14 - v16) >> 9;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v12, a2: v13, a3: v14);
  }
  return result;
}
