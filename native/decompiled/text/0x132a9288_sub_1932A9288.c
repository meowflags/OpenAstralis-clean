// sub_1932A9288
// rva 0x132a9288  size 552  section .text  group text
// window base 0x1932a9288: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A9288(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r8d
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  _QWORD *v29; // rbx
  _QWORD v31[5]; // [rsp+0h] [rbp-78h] BYREF
  int v32; // [rsp+28h] [rbp-50h]
  int v34; // [rsp+38h] [rbp-40h]
  int v36; // [rsp+48h] [rbp-30h]
  _BYTE v37[16]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v38; // [rsp+60h] [rbp-18h]

  v6 = *(_DWORD *)(a3 + 136);
  v8 = a4;
  if ( v6 == 1 )
  {
    if ( (~*(_DWORD *)(a3 + 132) & *(_DWORD *)(a3 + 128) & 0x27DF) != 0 )
    {
      if ( *(_DWORD *)a3 == 259 )
      {
        v9 = MEMORY[0x337480](a1, a2: a4, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 104) + 24LL), a5: v37);
        if ( v9 != 0 && v9 != -1073741275 )
        {
          v10 = MEMORY[0x3374B0](a1, a2: v8, a3, a4: v9);
          sub_1932A85F8(a1: v12, a2: v13, a3: v11, a4: v10);
          return sub_1932C8DE0(a1, a2: v8, a3, a4: (unsigned __int64)v31 ^ v38, a5, a6);
        }
      }
      *(_DWORD *)(a3 + 136) = 2;
      *(_DWORD *)(a3 + 132) = 0;
    }
  }
  else if ( v6 == 0 )
  {
    *(_DWORD *)(a3 + 44) = 0;
    *(_QWORD *)(a3 + 24) = 1;
    v36 = 32;
    *(_QWORD *)(a3 + 16) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(a3 + 112);
    v14 = *(_DWORD *)(a3 + 128);
    v34 = 32;
    v32 = 73764;
    v31[4] = a3;
    if ( (v14 & 0x82) != 0 )
      JUMPOUT(0x3265033A3LL);
    if ( (v14 & 0x304) != 0 )
      JUMPOUT(0x3265033B2LL);
    if ( (v14 & 0x2041) != 0 )
      JUMPOUT(0x3265033C1LL);
    if ( (v14 & 0x10) != 0 )
      JUMPOUT(0x3265033CDLL);
    if ( (*(_BYTE *)(a3 + 128) & 8) != 0 )
      JUMPOUT(0x3265033DDLL);
    *(_DWORD *)(a3 + 40) = (v14 & 0x41) != 0 ? 161 : 32;
    v15 = *(_QWORD *)(*(_QWORD *)(a3 + 104) + 24LL);
    *(_DWORD *)a3 = 259;
    v16 = MEMORY[0x337498](a1, a2: v8, a3: 0, a4: v15, a5: 0, a6: a3);
    if ( v16 != 0 )
    {
      if ( v16 == 259 )
        v17 = 997;
      else
        v17 = MEMORY[0x3374B0](a1, a2: v8, a3, a4: v16);
      sub_1932A85F8(a1, a2: v8, a3, a4: v17);
      v19 = MEMORY[0x79758](a1: v18);
      if ( v19 == 6 )
      {
        sub_1932A9114(a1, a2: v8, a3, a4: v8, a5: 0, a6);
        return sub_1932C8DE0(a1, a2: v8, a3, a4: (unsigned __int64)v31 ^ v38, a5, a6);
      }
      if ( v19 != 997 )
      {
        v20 = MEMORY[0x79758](a1);
        v24 = sub_1932A8158(a1: v22, a2: v23, a3: v21, a4: v20);
        *(_DWORD *)MEMORY[0x79B48](a1: v27, a2: v28, a3: v25, a4: v26) = v24;
        return sub_1932C8DE0(a1, a2: v8, a3, a4: (unsigned __int64)v31 ^ v38, a5, a6);
      }
    }
    *(_DWORD *)(a3 + 132) = *(_DWORD *)(a3 + 128);
    *(_DWORD *)(a3 + 136) = 1;
  }
  v29 = (_QWORD *)(a3 + 48);
  if ( (_QWORD *)*v29 != v29 )
  {
    *(_QWORD *)(*v29 + 8LL) = v29[1];
    *(_QWORD *)v29[1] = *v29;
    *v29 = v29;
    v29[1] = v29;
  }
  return sub_1932C8DE0(a1, a2: v8, a3, a4: (unsigned __int64)v31 ^ v38, a5, a6);
}
