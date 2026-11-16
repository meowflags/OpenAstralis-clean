// sub_185044280
// rva 0x05044280  size 329  section .text  group text
// window base 0x185044280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185044280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v32; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+8h] [rbp-30h]
  __int64 v34; // [rsp+10h] [rbp-28h]
  __int64 v35; // [rsp+18h] [rbp-20h]
  __int64 v36; // [rsp+20h] [rbp-18h]
  unsigned int v37; // [rsp+2Ch] [rbp-Ch]
  __int64 v38; // [rsp+30h] [rbp-8h]

  v38 = a5;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v14 + 8) )
    return sub_185044393(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  v37 = *(_DWORD *)(a3 + 116);
  if ( v37 == 0 )
    return sub_185044361(a1, a2, a3, a4: 0, a5, a6, a7, a8, a9, a10);
  v35 = a3;
  v15 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v12
                                                          + *(_QWORD *)(v13
                                                                      + 8LL * (*(_DWORD *)(v13 + 8LL * v37) >> 3)
                                                                      + 400));
  v36 = v13 + 8LL * v37;
  v16 = v15(a1, a2, a3: v36);
  if ( v16 == v13 )
    JUMPOUT(0x18504439DLL);
  v19 = *(unsigned int *)(v16 + 4);
  if ( (_DWORD)v19 == 0 )
    JUMPOUT(0x1850443A5LL);
  v34 = v13 + 8 * v19;
  v20 = MEMORY[0x184FFDFE0](a1: v17, a2: v18, a3: v34, a4: v13 + 376257808, a5: v13 + 376257808);
  if ( v38 == v13 )
    JUMPOUT(0x1850443B4LL);
  v33 = v20;
  MEMORY[0x184F36F80](a1: v22, a2: v23, a3: v38, a4: v21, a5: v20);
  MEMORY[0x184F35F80](a1: v25, a2: v26, a3: v38, a4: v24, a5: 64);
  v33 = v13 + 8LL * *(unsigned int *)(v13 + 8LL * v37 + 4);
  MEMORY[0x184F36F80](a1: v27, a2: v28, a3: v38, a4: v37, a5: v33);
  if ( *(int *)(v14 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v29, a2: v30, a3: v33);
  return 1;
}
