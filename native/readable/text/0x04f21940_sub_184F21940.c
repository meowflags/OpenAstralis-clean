// sub_4F21940
// rva 0x04f21940  size 307  section .text  group text
// window base 0x184f21940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F21940(
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
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // esi
  int v28; // r8d
  int v29; // r9d
  char v30; // [rsp+0h] [rbp-28h] BYREF
  __int64 v31; // [rsp+10h] [rbp-18h]
  __int64 v32; // [rsp+18h] [rbp-10h]
  __int64 v33; // [rsp+20h] [rbp-8h]

  v31 = a3;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v11 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_11;
  }
  v33 = a5;
  sub_4F21320(a1, a2, a3, a4, a5, a6, a7: v30);
  if ( v33 >= 1 )
  {
    v15 = *(unsigned int *)(v31 + 8);
    if ( (_DWORD)v15 != 0 )
    {
      v16 = *(_DWORD *)(v31 + 12);
      v17 = *(_DWORD *)(v10 + 8 * v15 + 8) - v16;
      if ( v17 >= 1 )
      {
        v18 = v33;
        if ( v17 >= (unsigned __int64)v33 )
        {
          *(_DWORD *)(v31 + 12) = v16 + v33;
          v32 = v18;
          v33 = 0;
          JUMPOUT(0x184F21A09LL);
        }
        JUMPOUT(0x309E379B6LL);
      }
      return sub_184F21A30(a1: v12, a2: v13, a3: v31, a4: v17, a5: v16, a6: v14, a7, a8, a9, a10);
    }
LABEL_11:
    sub_2771080();
    sub_2771080(a1: v22, a2: v23, a3: v20, a4: v21);
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
    return sub_4F21A80(a1: v26, a2: v27, a3: v24, a4: v25, a5: v28, a6: v29, a7);
  }
  if ( *(int *)(v11 + 16) <= 0 )
    sub_277F280(a1: v12, a2: v13, a3: v31);
  return 0;
}
