// sub_1E633C0
// rva 0x01e633c0  size 190  section .text  group text
// window base 0x181e633c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E633C0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 (*v12)(void); // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // r9d
  __int64 result; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // [rsp+0h] [rbp-28h] BYREF
  __int64 v32; // [rsp+10h] [rbp-18h]
  _DWORD *v33; // [rsp+18h] [rbp-10h]
  unsigned int v34; // [rsp+20h] [rbp-8h]
  unsigned int v35; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v10 + 8) )
  {
    v35 = a5;
    sub_1EB84E0();
  }
  else if ( a3 != v9 )
  {
    v35 = a5;
    v11 = *a3 >> 3;
    v12 = (__int64 (*)(void))(v8
                            + *(_QWORD *)((char *)&v9[2 * v11 + 10]
                                        + HIWORD(v9[2 * v9[2 * v11 + 5]
                                                  + 3
                                                  + (v9[2 * v11 + 11] & (0x749u >> HIBYTE(v9[2 * v11 + 11])))])));
    v33 = a3;
    v34 = v12();
    v16 = sub_1E60A60(a1: v14, a2: v15, a3: (__int64)(v9 + 94162742), a4: v13, a5: v34, a6: v35);
    if ( (_DWORD *)v16 == v9 )
      return sub_181E63454(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22, a7, a8);
    v32 = v16;
    result = sub_1F252C0(a1: v19, a2: v20, a3: v16);
    if ( *(int *)(v10 + 16) <= 0 )
      return sub_277F280(a1: v24, a2: v25, a3: v34, a4: v32);
    return result;
  }
  sub_2771080();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1E63480(a1: v28, a2: v29, a3: v26, a4: v27, a5: v30);
}
