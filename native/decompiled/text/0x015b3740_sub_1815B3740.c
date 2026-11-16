// sub_1815B3740
// rva 0x015b3740  size 2185  section .text  group text
// window base 0x1815b3740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815B3740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r11
  unsigned __int8 v10; // si
  __int64 v11; // rsi
  int v12; // edi
  int v13; // r10d
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 result; // rax
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+44h] [rbp-24h]
  unsigned __int64 v23; // [rsp+48h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-8h]

  v25 = a3;
  v7 = a5 & 0xFFFFFFFFFFFFFF00LL;
  v23 = a5 & 0xFFFFFFFFFFFFFF00LL;
  v8 = 0;
  while ( 2 )
  {
    v22 = v8;
    if ( (__int64)(v7 - ((__int64)v8 << 8)) < 0 )
      JUMPOUT(0x302B3FA09LL);
    v21 = v7 - ((__int64)v8 << 8);
    v14 = sub_1815AFB80(
            a1: v21,
            a2: *(unsigned int *)(a3 + 208),
            a3: *(_QWORD *)(a3 + 56),
            a4: v7,
            a5: v21 >> 8,
            a6: *(_DWORD *)(a3 + 208));
    v15 = v21;
    v18 = 0x7FFFFFFFFFFFFFFFLL;
    result = -1;
    while ( 1 )
    {
      a3 = v25;
      v16 = *(_QWORD *)(v25 + 48);
      v17 = *(unsigned __int8 *)(v16 + (int)v14 + 12);
      if ( (unsigned int)v17 <= 0x4F )
        __asm { jmp     r10; switch jump }
      v9 = (unsigned __int8)(v17 & 0xC0) >> 6;
      if ( (_DWORD)v9 == 3 )
      {
        v18 = v15;
        result = v14;
      }
      if ( v15 == a5 )
        break;
      v10 = *(_BYTE *)(v16 + (int)v14 + 1 + 12);
      if ( v10 != 0 )
        v11 = v15 + v10;
      else
        v11 = 0x7FFFFFFFFFFFFFFFLL;
      v12 = v17 & 0xE00;
      if ( (v17 & 0x100) != 0 && v12 == 1024 )
      {
        v13 = 1;
      }
      else if ( (v17 & 0x100) != 0 && v12 == 1536 )
      {
        v13 = 2;
      }
      else if ( (v17 & 0x100) != 0 && v12 == 2048 )
      {
        v13 = 0;
      }
      else
      {
        v13 = *(_DWORD *)(v6 + 4 * v9 + 376615652);
      }
      if ( v11 > a5 )
        goto LABEL_26;
      if ( (v17 & 0x100) != 0 )
        JUMPOUT(0x302B3F870LL);
      if ( v12 != 512 )
        JUMPOUT(0x302B3F897LL);
      if ( (v17 & 0x100) != 0 )
        JUMPOUT(0x302B3F8A6LL);
      v14 += v13
           + *(unsigned __int8 *)(v6 + (unsigned __int8)v17 + 376615684)
           - (__int64)*(int *)(v6 + 4 * v9 + 376615652);
      v15 = v11;
    }
    if ( (v17 & 0xC0) != 0 )
    {
      *(_QWORD *)(a6 + 8) = v15;
      return v14;
    }
LABEL_26:
    if ( result == -1 )
    {
      v8 = v22 + 1;
      v7 = v23;
      continue;
    }
    break;
  }
  *(_QWORD *)(a6 + 8) = v18;
  return result;
}
