// sub_181EBCFA0
// rva 0x01ebcfa0  size 434  section .text  group text
// window base 0x181ebcfa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBCFA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // r9d
  unsigned __int64 v20; // rdi
  unsigned int v21; // ebp
  unsigned __int64 i; // r8
  int v23; // r8d
  int v24; // r9d
  int j; // edi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  char v30; // [rsp+0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+10h] [rbp-28h]
  __int64 v32; // [rsp+18h] [rbp-20h]
  __int64 v33; // [rsp+20h] [rbp-18h]
  __int64 v34; // [rsp+28h] [rbp-10h]
  unsigned int v35; // [rsp+30h] [rbp-8h]
  unsigned int v36; // [rsp+34h] [rbp-4h]

  v34 = a5;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v13 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v30);
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
    return ((__int64 (*)(void))sub_181EBD160)();
  }
  else
  {
    v36 = *(_DWORD *)(a3 + 8);
    v35 = a6;
    v33 = a3;
    v14 = sub_181EBD4C0(a1, a2, a3, a4: a3, a5: (unsigned int)a6, a6: v36);
    v16 = *(_QWORD *)(v13 + 40);
    v17 = *(_QWORD *)(v13 + 32);
    v18 = v34;
    v19 = (*(int *)(v34 + 32) >> 8) & 0xFFF;
    v20 = (v19 + (unsigned __int64)v36 + 7) & 0x3FFFFFFF8LL;
    if ( v20 >= 0x20000 || v16 + v20 > v17 )
    {
      return sub_181EBD0EE(a1: v20, a2: v15, a3: v16, a4: v34, a5: v17, a6: v19, a7, a8, a9, a10, a11, a12);
    }
    else
    {
      v21 = v36;
      *(_QWORD *)(v13 + 40) = v16 + v20;
      if ( v18 == v12 )
        JUMPOUT(0x303D4702ELL);
      *(_QWORD *)v16 = v18 - v12;
      *(_DWORD *)(v16 + 8) = v21;
      *(_DWORD *)(v16 + 12) = 0;
      if ( v20 - 16 >= 0x800 )
      {
        v32 = v14;
        memset((void *)(v16 + 16), 0, v20 - 16);
        v14 = v32;
      }
      else
      {
        for ( i = 16; v20 > i; i += 8LL )
          *(_QWORD *)(v16 + i) = 0;
      }
      v23 = *(_DWORD *)(v14 + 8);
      v24 = v21 + v19 - v23;
      for ( j = 0; v23 > j; ++j )
      {
        v15 = j + v24;
        *(_BYTE *)(v16 + v15) = *(_BYTE *)(v14 + j + 12);
      }
      v32 = v14;
      v31 = v16;
      sub_181EBD160(a1: v21, a2: v15, a3: v33, a4: v31, a5: v31, a6: v35);
      if ( *(int *)(v13 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v27, a2: v28, a3: v26, a4: v36);
      return v31;
    }
  }
}
