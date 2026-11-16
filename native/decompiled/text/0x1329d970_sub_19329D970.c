// sub_19329D970
// rva 0x1329d970  size 707  section .text  group text
// window base 0x19329d970: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_19329D970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int8 *v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // ebp
  int v19; // r10d
  __int64 v20; // r11
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  char v26; // al
  _BYTE *v27; // rax
  unsigned __int8 *v28; // rcx
  unsigned __int8 *v29; // rax
  int v30; // ecx
  unsigned __int8 *v31; // rax
  int v32; // ecx
  __int64 v33; // rcx
  unsigned __int8 v34; // al
  int v35; // ebx
  int v36; // eax
  int v37; // esi
  int v38; // edi
  int v40; // [rsp+0h] [rbp-488h] BYREF
  __int64 v41; // [rsp+8h] [rbp-480h]
  __int64 v42; // [rsp+10h] [rbp-478h]
  __int64 v43; // [rsp+18h] [rbp-470h]
  int v44; // [rsp+20h] [rbp-468h]
  _BYTE v45[8]; // [rsp+30h] [rbp-458h] BYREF
  unsigned __int8 *v46; // [rsp+38h] [rbp-450h]
  unsigned __int8 *v47; // [rsp+40h] [rbp-448h]
  __int64 v48; // [rsp+48h] [rbp-440h]
  _BYTE v49[1024]; // [rsp+50h] [rbp-438h] BYREF
  __int64 v50; // [rsp+450h] [rbp-38h] BYREF

  v8 = MEMORY[0x79590](a1: 0, a2: 0, a3, a4: 16);
  LOWORD(v44) = v9;
  if ( (unsigned int)MEMORY[0x79598](a1: v9, a2: v10, a3: 4, a4: v8, a5: v45) == 0 )
  {
    v15 = (unsigned int)MEMORY[0x79588]();
    if ( (unsigned int)MEMORY[0x795A8](a1: v16, a2: v17, a3: 90, a4: v15, a5: v45, a6: 4) == 0
      && (unsigned int)MEMORY[0x795A8](a1: v12, a2: v13, a3: 104, a4: (unsigned int)v15, a5: v45, a6: 4) == 0 )
    {
      v45[0] = v13;
    }
  }
  v18 = v12;
  v19 = v12;
  v20 = v12;
  while ( 1 )
  {
    v21 = v20 + a4;
    v22 = a5 - v19;
    if ( v20 + a4 == 0 || v22 < 0 )
      break;
    v23 = v22 + 1;
    v24 = v12;
    v25 = v12;
    if ( v23 > 1024 )
      JUMPOUT(0x3264F7A5CLL);
    v11 = (unsigned int)(v23 - 1);
    if ( v23 != 1 )
    {
      do
      {
        v26 = *(_BYTE *)(v25 + v21);
        ++v24;
        v49[v25++] = v26;
        if ( v26 == 10 )
          break;
        v11 = (unsigned int)(v11 - 1);
      }
      while ( (_DWORD)v11 != 0 );
    }
    v49[v25] = v13;
    if ( v25 <= 0 )
    {
LABEL_35:
      if ( v24 != -1 )
        return sub_1932C8DE0(a1: v12, a2: v13, a3: v11, a4: (unsigned __int64)&v40 ^ v50, a5: v21, a6: v14);
      break;
    }
    v11 = v49[0];
    v27 = v49;
    v20 += v25;
    v19 += v24;
    ++v18;
    v28 = v49;
    if ( v49[0] != 35 && v49[0] != 10 )
    {
      v11 = v12;
      do
      {
        (&v46)[v11] = v28;
        if ( *v27 == (_BYTE)v13 )
        {
LABEL_39:
          v13 = (unsigned int)v27 - (unsigned int)v49;
          v35 = 533704;
          goto LABEL_41;
        }
        do
        {
          if ( *v27 == 58 )
            break;
          if ( ++v27 >= (_BYTE *)&v50 )
          {
            v13 = (unsigned int)v27 - (unsigned int)v49;
            v35 = 533680;
            goto LABEL_41;
          }
        }
        while ( *v27 != (_BYTE)v13 );
        if ( *v27 == (_BYTE)v13 )
          goto LABEL_39;
        *v27 = v13;
        ++v11;
        v28 = ++v27;
      }
      while ( v11 < 3 );
      if ( *v27 != 10 )
      {
        v13 = (unsigned int)v27 - (unsigned int)v49;
        v35 = 533736;
        goto LABEL_41;
      }
      v29 = v46;
      do
      {
        v30 = v29[a3 - (_QWORD)v46];
        v11 = (unsigned int)*v29 - v30;
        if ( (_DWORD)v11 != 0 )
          break;
        ++v29;
      }
      while ( v30 != 0 );
      if ( (_DWORD)v11 == 0 )
      {
        v14 = v47;
        v31 = v47;
        do
        {
          v32 = v31[v45 - v47];
          v11 = (unsigned int)*v31 - v32;
          if ( (_DWORD)v11 != 0 )
            break;
          ++v31;
        }
        while ( v32 != 0 );
        if ( (_DWORD)v11 == 0 )
        {
LABEL_34:
          v12 = sub_1932CA1C1(a1: v12, a2: v13, a3: v11, a4: v48);
          goto LABEL_35;
        }
        v33 = v12;
        while ( 1 )
        {
          v34 = v47[v33++];
          if ( v34 != *(_BYTE *)(v33 + 533771) )
            break;
          if ( v33 == 4 )
            goto LABEL_34;
        }
      }
    }
  }
  v35 = 533776;
LABEL_41:
  v36 = sub_1932CA21B(a1: v12, a2: v13, a3: v11, a4: 2);
  v44 = v37;
  sub_19329DCC0(a1: v38, a2: v37, a3: 533800, a4: v36, a5: v35, a6: v18, a7: v40, a8: v41, a9: v42, a10: v43);
  return sub_1932C8DE0(a1: v12, a2: v13, a3: v11, a4: (unsigned __int64)&v40 ^ v50, a5: v21, a6: v14);
}
