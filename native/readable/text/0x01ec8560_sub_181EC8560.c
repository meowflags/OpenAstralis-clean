// sub_1EC8560
// rva 0x01ec8560  size 1555  section .text  group text
// window base 0x181ec8560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC8560(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20)
{
  __int64 v20; // r13
  _DWORD *v21; // r14
  __int64 v22; // r15
  __int64 v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  int v27; // ebx
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // edi
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  __int64 v35; // rsi
  unsigned __int64 i; // rcx
  __int64 v38; // [rsp+0h] [rbp-78h] BYREF
  _DWORD *v39; // [rsp+40h] [rbp-38h]
  _DWORD *v40; // [rsp+48h] [rbp-30h]
  _DWORD *v41; // [rsp+50h] [rbp-28h]
  __int64 v42; // [rsp+58h] [rbp-20h]
  __int64 v43; // [rsp+60h] [rbp-18h]
  int v44; // [rsp+6Ch] [rbp-Ch]
  unsigned int v45; // [rsp+70h] [rbp-8h]
  int v46; // [rsp+74h] [rbp-4h]

  v43 = a3;
  v42 = a5;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v22 + 8) )
    JUMPOUT(0x181EC8ACFLL);
  v23 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v23 == 0 )
    JUMPOUT(0x181EC8AD9LL);
  v46 = a6;
  v24 = (_DWORD *)sub_28A24C0(a1, a2, a3: &v21[2 * v23]);
  v41 = v24;
  if ( v24 == v21 )
  {
    if ( *(int *)(v22 + 16) <= 0 )
      JUMPOUT(0x181EC8ABALL);
    return (__int64)v21;
  }
  else
  {
    v26 = *v24 >> 3;
    v27 = v21[2 * v26 + 11];
    v40 = &v21[2 * v21[2 * v26 + 5]];
    v45 = v27 & (0x2331u >> SHIBYTE(v27));
    v28 = v40[v45 + 3];
    v39 = &v21[2 * v26];
    v29 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v20 + *(_QWORD *)((char *)v39 + HIWORD(v28) + 240)))(
            a1: v25,
            a2: v40,
            a3: v24);
    if ( v29 < 0 )
      JUMPOUT(0x181EC8AE5LL);
    v44 = v29;
    v33 = *(_QWORD *)(v22 + 40);
    v34 = (4LL * (unsigned int)v29 + 19) & 0x7FFFFFFF8LL;
    if ( v34 >= 0x20000 || (v35 = v33 + v34, v33 + v34 > *(_QWORD *)(v22 + 32)) )
      JUMPOUT(0x181EC8A90LL);
    *(_QWORD *)(v22 + 40) = v35;
    *(_QWORD *)v33 = 40452624;
    *(_DWORD *)(v33 + 8) = v29;
    *(_DWORD *)(v33 + 12) = 0;
    if ( v34 - 16 >= 0x800 )
      JUMPOUT(0x181EC8AA7LL);
    for ( i = 16; v34 > i; i += 8LL )
      *(_QWORD *)(v33 + i) = 0;
    return sub_181EC86A6(
             a1: v30,
             a2: v35,
             a3: v33,
             a4: i,
             a5: v31,
             a6: v32,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20);
  }
}
