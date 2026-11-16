// sub_18274BF20
// rva 0x0274bf20  size 667  section .text  group text
// window base 0x18274bf20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274BF20(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6)
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  _QWORD v26[3]; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v27; // [rsp+18h] [rbp-10h]
  __int64 (__fastcall *v28)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *); // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)v26 <= *(_QWORD *)(v8 + 8) )
  {
    v27 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_32;
  }
  if ( a5 != v7 && a5[2] == 8 )
  {
    v10 = (unsigned int)a5[3];
    if ( (_DWORD)v10 == 0
      || (v11 = v7[2 * v10] >> 3,
          v6 = (unsigned __int64)&v7[2 * v7[2 * v11 + 5]],
          a2 = v7[2 * v11 + 11] & (0x2364u >> HIBYTE(v7[2 * v11 + 11])),
          (unsigned __int16)*(_DWORD *)(v6 + 4 * a2 + 12) == 9060) )
    {
      v6 = (unsigned int)a5[4];
      if ( (_DWORD)v6 == 0 )
        goto LABEL_9;
      v12 = v7[2 * v6] >> 3;
      if ( SHIWORD(v7[2 * v12 + 15]) >= 2 && v7[2 * v7[2 * v12 + 4] + 4] == 8163 )
        goto LABEL_9;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      a6 = sub_182757000(a1, a2, a3: a5);
LABEL_9:
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v7[2 * v13] >> 3;
        a1 = (unsigned int)v7[2 * v14 + 11];
        a2 = (unsigned __int64)&v7[2 * v7[2 * v14 + 5]];
        if ( (unsigned __int16)*(_DWORD *)(a2 + 4LL * ((unsigned int)a1 & (0x653u >> HIBYTE(v7[2 * v14 + 11]))) + 12) != 1619 )
          continue;
      }
      a2 = (unsigned int)a5[6];
      if ( (_DWORD)a2 != 0 )
      {
        v15 = v7[2 * a2] >> 3;
        a1 = (unsigned __int64)&v7[2 * v7[2 * v15 + 5]];
        if ( (unsigned __int16)*(_DWORD *)(a1 + 4LL * (v7[2 * v15 + 11] & (0x653u >> HIBYTE(v7[2 * v15 + 11]))) + 12) != 1619 )
          continue;
      }
      a1 = (unsigned int)a5[7];
      if ( (_DWORD)a1 != 0 )
      {
        v16 = v7[2 * a1] >> 3;
        if ( SHIWORD(v7[2 * v16 + 15]) < 4 || v7[2 * v7[2 * v16 + 4] + 6] != 86782 )
          continue;
      }
      v17 = (unsigned int)a5[8];
      if ( (_DWORD)v17 != 0 )
      {
        v18 = v7[2 * v17] >> 3;
        if ( SHIWORD(v7[2 * v18 + 15]) < 4 || v7[2 * v7[2 * v18 + 4] + 6] != 86782 )
          continue;
      }
      v19 = (unsigned int)a5[9];
      if ( (_DWORD)v19 == 0 || v7[2 * v19] >> 3 == 4479962 )
        break;
    }
    v20 = (unsigned int)a5[10];
    if ( (_DWORD)v20 == 0 )
      break;
    v28 = (__int64 (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))a6;
    v27 = a5;
    v21 = v7[2 * v20] >> 3;
    if ( (unsigned __int16)v7[2 * v7[2 * v21 + 5] + 3 + (v7[2 * v21 + 11] & (0x22D8u >> HIBYTE(v7[2 * v21 + 11])))] == 8920 )
      goto LABEL_25;
LABEL_32:
    a5 = v27;
  }
  v28 = (__int64 (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))a6;
LABEL_25:
  v26[1] = &v7[2 * v19];
  v26[2] = &v7[2 * v20];
  result = v28(a1: &v7[2 * a2], a2: &v7[2 * a1], a3: &v7[2 * v10], a4: &v7[2 * v17], a5: &v7[2 * v6], a6: &v7[2 * v13]);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1: v24, a2: v25, a3: v23);
  return result;
}
