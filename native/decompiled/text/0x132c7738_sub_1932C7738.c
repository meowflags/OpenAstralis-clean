// sub_1932C7738
// rva 0x132c7738  size 631  section .text  group text
// window base 0x1932c7738: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C7738(__int64 a1, int a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v7; // rsi
  int v8; // ecx
  unsigned __int16 v10; // r10
  __int16 v12; // r8
  _DWORD *v13; // r11
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int16 v16; // ax
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int16 v21; // r10
  int v22; // edx
  char v23; // cl
  unsigned __int16 v24; // r8
  __int64 v25; // rdx
  __int16 v26; // ax
  __int64 v27; // rcx
  __int16 v28; // ax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int16 v31; // r8
  int v32; // eax
  unsigned int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int16 v36; // ax
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // edx
  __int64 v40; // r10
  __int64 v41; // rax
  char v42; // cl
  unsigned __int16 v43; // r8
  __int64 v44; // rdx
  __int16 v45; // ax
  __int64 v46; // rcx
  __int16 v47; // ax
  int v48; // edi
  int v49; // r9d

  v7 = a6;
  v8 = *(_DWORD *)(a4 + 5904);
  v10 = a3 - 257;
  v12 = *(_WORD *)(a4 + 5900);
  v13 = (_DWORD *)(a4 + 40);
  v14 = (__int64 *)(a4 + 16);
  if ( v8 <= 11 )
  {
    v22 = v8 + 5;
    *(_DWORD *)(a4 + 5904) = v8 + 5;
    v21 = v12 | (v10 << v8);
  }
  else
  {
    v15 = (unsigned int)*v13;
    v16 = v10 << v8;
    v17 = *v14;
    v18 = v12 | v16;
    *(_WORD *)(a4 + 5900) = v18;
    *(_BYTE *)(v15 + v17) = v18;
    v19 = *v14;
    v20 = (unsigned int)(*v13 + 1);
    LOBYTE(v18) = *(_BYTE *)(a4 + 5901);
    *v13 = v20;
    *(_BYTE *)(v20 + v19) = v18;
    LOBYTE(v19) = 16 - *(_BYTE *)(a4 + 5904);
    ++*v13;
    v21 = v10 >> v19;
    *(_DWORD *)(a4 + 5904) -= 11;
    v22 = *(_DWORD *)(a4 + 5904);
  }
  v23 = v22;
  v24 = a5 - 1;
  if ( v22 <= 11 )
  {
    v32 = v22 + 5;
    *(_DWORD *)(a4 + 5904) = v22 + 5;
    v31 = v21 | (v24 << v22);
  }
  else
  {
    v25 = (unsigned int)*v13;
    v26 = v24 << v23;
    v27 = *v14;
    v28 = v21 | v26;
    *(_WORD *)(a4 + 5900) = v28;
    *(_BYTE *)(v25 + v27) = v28;
    v29 = *v14;
    v30 = (unsigned int)(*v13 + 1);
    LOBYTE(v28) = *(_BYTE *)(a4 + 5901);
    *v13 = v30;
    *(_BYTE *)(v30 + v29) = v28;
    LOBYTE(v29) = 16 - *(_BYTE *)(a4 + 5904);
    ++*v13;
    v31 = v24 >> v29;
    *(_DWORD *)(a4 + 5904) -= 11;
    v32 = *(_DWORD *)(a4 + 5904);
  }
  v33 = a6 - 4;
  if ( v32 <= 12 )
  {
    v39 = v32 + 4;
    *(_DWORD *)(a4 + 5904) = v32 + 4;
    LOWORD(v33) = v31 | ((_WORD)v33 << v32);
  }
  else
  {
    v34 = (unsigned int)*v13;
    v35 = *v14;
    v36 = v31 | ((_WORD)v33 << v32);
    *(_WORD *)(a4 + 5900) = v36;
    *(_BYTE *)(v34 + v35) = v36;
    v37 = *v14;
    v38 = (unsigned int)(*v13 + 1);
    LOBYTE(v36) = *(_BYTE *)(a4 + 5901);
    *v13 = v38;
    *(_BYTE *)(v38 + v37) = v36;
    LOBYTE(v37) = 16 - *(_BYTE *)(a4 + 5904);
    ++*v13;
    LOWORD(v33) = (unsigned __int16)v33 >> v37;
    *(_DWORD *)(a4 + 5904) -= 12;
    v39 = *(_DWORD *)(a4 + 5904);
  }
  *(_WORD *)(a4 + 5900) = v33;
  if ( (int)v7 > 0 )
  {
    v40 = 557128;
    do
    {
      v41 = *(unsigned __int8 *)v40;
      v42 = v39;
      if ( v39 <= 13 )
      {
        LOWORD(v33) = (*(_WORD *)(a4 + 4 * v41 + 2726) << v39) | v33;
        v39 += 3;
        *(_DWORD *)(a4 + 5904) = v39;
      }
      else
      {
        v43 = *(_WORD *)(a4 + 4 * v41 + 2726);
        v44 = (unsigned int)*v13;
        v45 = v43 << v42;
        v46 = *v14;
        v47 = v33 | v45;
        *(_WORD *)(a4 + 5900) = v47;
        v33 = v43;
        *(_BYTE *)(v44 + v46) = v47;
        *(_BYTE *)((unsigned int)++*v13 + *v14) = *(_BYTE *)(a4 + 5901);
        LOBYTE(v46) = 16 - *(_BYTE *)(a4 + 5904);
        ++*v13;
        LOWORD(v33) = v43 >> v46;
        *(_DWORD *)(a4 + 5904) -= 13;
        v39 = *(_DWORD *)(a4 + 5904);
      }
      ++v40;
      *(_WORD *)(a4 + 5900) = v33;
      --v7;
    }
    while ( v7 != 0 );
  }
  sub_1932C79B0(a1: (_DWORD)v14, a2: v7, a3: a4 + 188, a4, a5: a3 - 1, a6: v33);
  return sub_1932C79B0(a1: v48, a2, a3: (int)a4 + 2480, a4, a5: a5 - 1, a6: v49);
}
