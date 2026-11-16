// sub_1932A8A9C
// rva 0x132a8a9c  size 347  section .text  group text
// window base 0x1932a8a9c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A8A9C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 i; // rbp
  __int64 v11; // r9
  int v12; // r10d
  int v13; // eax
  int v14; // r11d
  _QWORD *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // r10d
  int v20; // [rsp+0h] [rbp-28h]
  int v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]

  v6 = 0;
  v8 = a4;
  if ( a6 != 0 )
  {
    v9 = (__int64 *)(a5 + 8);
    for ( i = a6; i != 0; --i )
    {
      v11 = *v9;
      v12 = 0;
      *(_QWORD *)(v11 + 132) = 0;
      if ( *(_BYTE *)(v11 + 140) == 0 )
      {
        if ( *(_DWORD *)v11 == -1073741536 )
          goto LABEL_16;
        if ( *(int *)v11 < 0 )
        {
          v12 = 8;
LABEL_16:
          v15 = (_QWORD *)(v11 + 48);
          if ( (_QWORD *)*v15 == v15 )
          {
            *(_QWORD *)(v11 + 56) = v8 + 16;
            v16 = *(_QWORD *)(v8 + 16);
            *v15 = v16;
            *(_QWORD *)(v16 + 8) = v15;
            *(_QWORD *)(v8 + 16) = v15;
          }
          v17 = *(_DWORD *)(v11 + 128);
          v18 = v17 & v12;
          if ( v18 != 0 )
          {
            if ( v17 < 0 )
              *(_DWORD *)(v11 + 128) = 0;
            v13 = 1;
            *(_QWORD *)(a3 + 16LL * (int)v6 + 8) = *(_QWORD *)(v11 + 120);
            *(_DWORD *)(a3 + 16LL * (int)v6) = v18;
          }
          else
          {
            v13 = 0;
          }
          goto LABEL_23;
        }
        if ( *(_DWORD *)(v11 + 24) == 0 )
          goto LABEL_16;
        v14 = *(_DWORD *)(v11 + 40);
        if ( (v14 & 0x20) == 0 )
        {
          if ( (v14 & 2) != 0 )
            JUMPOUT(0x326502B3ELL);
          if ( (v14 & 4) != 0 )
            JUMPOUT(0x326502B4DLL);
          if ( (v14 & 8) != 0 )
            JUMPOUT(0x326502B5CLL);
          if ( (v14 & 0x10) != 0 )
            JUMPOUT(0x326502B68LL);
          if ( (v14 & 0x100) != 0 )
            JUMPOUT(0x326502B7BLL);
          v12 = (v14 & 0x81) != 0 ? 0x41 : 0;
          goto LABEL_16;
        }
      }
      v13 = sub_1932A9114(a1: (_DWORD)v9, a2: v8, a3: v11, a4: v8, a5: 0, a6: v11, a7: v20, a8: v21, a9: v22, a10: v23);
LABEL_23:
      v6 += v13;
      v9 += 4;
    }
  }
  return v6;
}
