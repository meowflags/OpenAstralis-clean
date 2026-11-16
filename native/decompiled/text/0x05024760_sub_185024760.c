// sub_185024760
// rva 0x05024760  size 2181  section .text  group text
// window base 0x185024760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185024760(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // r11d
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // rbx
  unsigned __int64 i; // r8
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 result; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  signed int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rsi
  int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  unsigned __int64 v49; // r9
  __int64 v50; // rbx
  unsigned __int64 j; // r8
  int v52; // [rsp+0h] [rbp-98h] BYREF
  __int64 v53; // [rsp+8h] [rbp-90h]
  __int64 v54; // [rsp+10h] [rbp-88h]
  __int64 v55; // [rsp+18h] [rbp-80h]
  unsigned __int64 v56; // [rsp+20h] [rbp-78h]
  __int64 v57; // [rsp+28h] [rbp-70h]
  __int64 v58; // [rsp+30h] [rbp-68h]
  unsigned int v59; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v60; // [rsp+40h] [rbp-58h]
  unsigned int v61; // [rsp+44h] [rbp-54h]
  unsigned int v62; // [rsp+48h] [rbp-50h]
  unsigned int v63; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v64; // [rsp+50h] [rbp-48h]
  unsigned int v65; // [rsp+5Ch] [rbp-3Ch]
  unsigned int v66; // [rsp+60h] [rbp-38h]
  unsigned int v67; // [rsp+64h] [rbp-34h]
  unsigned int v68; // [rsp+68h] [rbp-30h]
  unsigned int v69; // [rsp+6Ch] [rbp-2Ch]
  unsigned int v70; // [rsp+70h] [rbp-28h]
  unsigned int v71; // [rsp+74h] [rbp-24h]
  __int64 v72; // [rsp+78h] [rbp-20h]
  int v73; // [rsp+84h] [rbp-14h]
  int v74; // [rsp+88h] [rbp-10h]
  int v75; // [rsp+8Ch] [rbp-Ch]
  __int64 v76; // [rsp+90h] [rbp-8h]

  v58 = a3;
  v57 = a5;
  v75 = a1;
  v56 = a2;
  v74 = a4;
  if ( (unsigned __int64)&v52 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v9 )
  {
    v11 = *(_DWORD *)(a5 + 8) >> 1;
    v73 = v11;
    v72 = 34082368;
    if ( (_DWORD)a4 != 0 )
    {
      v69 = a1;
      v55 = a6;
      LODWORD(v6) = a1;
      while ( 1 )
      {
LABEL_5:
        if ( v11 <= (int)v6 )
        {
          v65 = v6;
          v28 = v55;
          v29 = v69;
          goto LABEL_40;
        }
        v12 = *(unsigned __int16 *)(a5 + 2 * (int)v6 + 12);
        if ( v12 < 0xD800 )
        {
          v70 = *(unsigned __int16 *)(a5 + 2 * (int)v6 + 12);
          v68 = 1;
          v67 = v6;
          goto LABEL_10;
        }
        if ( v12 < 0xE000 )
        {
          v71 = *(unsigned __int16 *)(a5 + 2 * (int)v6 + 12);
          v67 = v6;
          v13 = sub_18501D060(a1: 0, a2, a3: a5, a4, a5: v6, a6: (unsigned int)v11);
          if ( v13 >= 0x10000 )
            JUMPOUT(0x30A03F83ELL);
          v70 = v13;
          v68 = 1;
          goto LABEL_10;
        }
        while ( 1 )
        {
          v70 = v12;
          v68 = 1;
          v67 = v6;
LABEL_10:
          v14 = MEMORY[0x184F77700](a1, a2, a3: v58, a4, a5: v67, a6: v56);
          LODWORD(v6) = v69 + 1;
          LODWORD(v7) = 2 * v69;
          a2 = (int)(2 * v69);
          if ( (v14 & 0xFFFF0000) == 0 )
          {
            v71 = v69 + 1;
            v62 = v67 + v68;
            a4 = v55;
            *(_WORD *)(v55 + (int)v7 + 12) = v14;
            LODWORD(v6) = v62;
            v76 = v8;
            v69 = v71;
            v11 = v73;
            a5 = v57;
            goto LABEL_5;
          }
          v66 = v14;
          v64 = (int)v7;
          v63 = 2 * v69;
          v71 = v69 + 1;
          v62 = v67 + v68;
          v15 = v14 == -1
              ? MEMORY[0x184F77000](a1: 1, a2: (int)v7, a3: v58, a4: v67 + v68, a5: v67, a6: v56)
              : MEMORY[0x184F4B200](a1, a2: (int)v7, a3: v14);
          if ( v15 != v9 )
            break;
LABEL_93:
          MEMORY[0x182771080]();
LABEL_94:
          MEMORY[0x182771080]();
LABEL_95:
          v44 = MEMORY[0x182771080]();
LABEL_96:
          v20 = MEMORY[0x182770E80](a1: v46, a2: v47, a3: v44, a4: v45, a5: v61);
LABEL_97:
          MEMORY[0x182770E80](a1: v22, a2: v23, a3: v20, a4: v21, a5: v61);
LABEL_98:
          MEMORY[0x182771220](a1: v67, a2, a3: (unsigned int)v7, a4, a5: (unsigned int)a4, a6: v68);
LABEL_99:
          MEMORY[0x182771220](a1: v66, a2, a3: (unsigned int)v7, a4, a5: (unsigned int)a4, a6: v70);
        }
        v54 = v15;
        a4 = *(unsigned int *)(v15 + 8);
        if ( (unsigned int)a4 <= v68 )
        {
          v18 = v55;
          goto LABEL_16;
        }
        LODWORD(v6) = v55;
        v60 = *(_DWORD *)(v15 + 8);
        if ( v55 == v9 )
          goto LABEL_94;
        v61 = a4 + (*(_DWORD *)(v55 + 8) >> 1) - v68;
        LODWORD(v7) = v61;
        v20 = sub_1850217A0(a1, a2, a3: v61, a4, a5: v16, a6: v17, a7: v52);
        if ( (v20 & 0x80000000) != 0 )
          goto LABEL_97;
        v24 = *(_QWORD *)(v10 + 40);
        v25 = (v20 + 19LL) & 0x1FFFFFFF8LL;
        if ( v25 >= 0x20000 || (v22 = v24 + v25, v24 + v25 > *(_QWORD *)(v10 + 32)) )
        {
          v59 = v20;
          v24 = MEMORY[0x181EAA840](a1: v22, a2: v23, a3: v72, a4: v21, a5: v20);
        }
        else
        {
          v26 = v72;
          *(_QWORD *)(v10 + 40) = v22;
          *(_QWORD *)v24 = v26;
          *(_DWORD *)(v24 + 8) = v20;
          *(_DWORD *)(v24 + 12) = 0;
          if ( v25 - 16 >= 0x800 )
          {
            memset((void *)(v24 + 16), 0, v25 - 16);
            v21 = 0;
          }
          else
          {
            for ( i = 16; v25 > i; i += 8LL )
              *(_QWORD *)(v24 + i) = 0;
          }
        }
        v53 = v24;
        MEMORY[0x181EB4960](a1: 0, a2: v63, a3: v55, a4: v21, a5: 0, a6: v24);
        v18 = v53;
        a4 = v60;
LABEL_16:
        if ( (_DWORD)a4 != 0 )
        {
          v6 = v54;
          a2 = v64;
          *(_WORD *)(v18 + v64 + 12) = *(_WORD *)(v54 + 12);
          v7 = 1;
          v19 = v71;
          while ( (int)a4 > (int)v7 )
          {
            a2 = v19 + 1;
            if ( (unsigned int)a4 <= (unsigned int)v7 )
              goto LABEL_99;
            *(_WORD *)(v18 + (int)(2 * v19) + 12) = *(_WORD *)(v6 + 2 * v7 + 12);
            v7 = (unsigned int)(v7 + 1);
            ++v19;
          }
          LODWORD(v6) = v62;
          v69 = v19;
          v55 = v18;
          v11 = v73;
          a5 = v57;
        }
        else
        {
          LODWORD(v6) = v62;
          v55 = v18;
          v11 = v73;
          a5 = v57;
        }
      }
    }
    v71 = a1;
    v55 = a6;
    v33 = a1;
    while ( v11 > v33 )
    {
      v34 = 2 * v33;
      v35 = *(unsigned __int16 *)(a5 + v34 + 12);
      if ( (unsigned int)v35 < 0xD800 )
      {
        v70 = 1;
        v69 = v33;
        v36 = v35;
      }
      else if ( (unsigned int)v35 >= 0xE000 )
      {
        v70 = 1;
        v69 = v33;
        v36 = v35;
      }
      else
      {
        v68 = *(unsigned __int16 *)(a5 + v34 + 12);
        v69 = v33;
        v36 = sub_18501D060(a1: 0, a2: v35, a3: a5, a4, a5: v33, a6: (unsigned int)v11);
        if ( v36 >= 0x10000 )
          JUMPOUT(0x30A03FBABLL);
        a4 = 1;
        v70 = 1;
      }
      if ( v36 == 931 || v36 == 304 )
      {
        v68 = v36;
        v37 = MEMORY[0x184F77700](a1, a2: v35, a3: v58, a4, a5: v69, a6: v56);
      }
      else
      {
        v68 = v36;
        v37 = MEMORY[0x184F4B900](a1, a2: v35, a3: (unsigned int)v36);
      }
      v67 = v37;
      LODWORD(v6) = v71 + 1;
      LODWORD(v7) = 2 * v71;
      a2 = (int)(2 * v71);
      if ( (v37 & 0xFFFF0000) != 0 )
      {
        v64 = (int)v7;
        v63 = 2 * v71;
        v66 = v71 + 1;
        v65 = v69 + v70;
        if ( v37 == -1 )
          v38 = MEMORY[0x184F77000](a1: 1, a2: (int)v7, a3: v58, a4: v69 + v70, a5: v69, a6: v56);
        else
          v38 = MEMORY[0x184F4B200](a1, a2: (int)v7, a3: v37);
        if ( v38 == v9 )
          goto LABEL_92;
        v54 = v38;
        a4 = *(unsigned int *)(v38 + 8);
        v62 = a4;
        if ( (unsigned int)a4 > v70 )
        {
          LODWORD(v6) = v55;
          if ( v55 == v9 )
            goto LABEL_95;
          v61 = a4 + (*(_DWORD *)(v55 + 8) >> 1) - v70;
          LODWORD(v7) = v61;
          v44 = sub_1850217A0(a1, a2, a3: v61, a4, a5: v40, a6: v41, a7: v52);
          if ( (v44 & 0x80000000) != 0 )
            goto LABEL_96;
          v48 = *(_QWORD *)(v10 + 40);
          v49 = (v44 + 19LL) & 0x1FFFFFFF8LL;
          if ( v49 >= 0x20000 || (v46 = v48 + v49, v48 + v49 > *(_QWORD *)(v10 + 32)) )
          {
            v60 = v44;
            v48 = MEMORY[0x181EAA840](a1: v46, a2: v47, a3: v72, a4: v45, a5: v44);
          }
          else
          {
            v50 = v72;
            *(_QWORD *)(v10 + 40) = v46;
            *(_QWORD *)v48 = v50;
            *(_DWORD *)(v48 + 8) = v44;
            *(_DWORD *)(v48 + 12) = 0;
            if ( v49 - 16 >= 0x800 )
            {
              memset((void *)(v48 + 16), 0, v49 - 16);
              v45 = 0;
            }
            else
            {
              for ( j = 16; v49 > j; j += 8LL )
                *(_QWORD *)(v48 + j) = 0;
            }
          }
          v53 = v48;
          MEMORY[0x181EB4960](a1: 0, a2: v63, a3: v55, a4: v45, a5: 0, a6: v48);
          v42 = v53;
          a4 = v62;
        }
        else
        {
          v42 = v55;
        }
        if ( (_DWORD)a4 != 0 )
        {
          v6 = v54;
          a2 = v64;
          *(_WORD *)(v42 + v64 + 12) = *(_WORD *)(v54 + 12);
          v43 = v66;
          v7 = 1;
          while ( (int)a4 > (int)v7 )
          {
            a2 = (unsigned int)(v43 + 1);
            if ( (unsigned int)a4 <= (unsigned int)v7 )
              goto LABEL_98;
            *(_WORD *)(v42 + 2 * (int)v43 + 12) = *(_WORD *)(v6 + 2 * v7 + 12);
            v7 = (unsigned int)(v7 + 1);
            v43 = (unsigned int)a2;
          }
          if ( *(int *)(v10 + 16) <= 0 )
            v42 = MEMORY[0x18277F280](a1, a2, a3: v43);
          v33 = v65;
          v71 = v43;
          v55 = v42;
          v11 = v73;
          a5 = v57;
        }
        else
        {
          if ( *(int *)(v10 + 16) <= 0 )
          {
            v42 = MEMORY[0x18277F280](a1, a2, a3: v39, a4: v65);
            v33 = a4;
          }
          else
          {
            v33 = v65;
          }
          v55 = v42;
          v11 = v73;
          a5 = v57;
        }
      }
      else
      {
        v66 = v71 + 1;
        v65 = v69 + v70;
        a4 = v55;
        *(_WORD *)(v55 + (int)v7 + 12) = v37;
        if ( *(int *)(v10 + 16) <= 0 )
        {
          MEMORY[0x18277F280](a1, a2: (int)v7);
          v71 = v6;
          v11 = v73;
          a5 = v57;
          v33 = v65;
        }
        else
        {
          v33 = v65;
          v76 = v8;
          v71 = v66;
          v11 = v73;
          a5 = v57;
        }
      }
    }
    v65 = v33;
    v28 = v55;
    v29 = v71;
LABEL_40:
    v55 = v28;
    v69 = v29;
    result = sub_185021B40(a1, a2, a3: v28, a4: v28, a5: 0, a6: v29, a7: v52, a8: v53);
    if ( *(int *)(v10 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v31, a2: v32, a3: v69, a4: v55, a5: v65);
    return result;
  }
  MEMORY[0x182771080]();
LABEL_92:
  MEMORY[0x182771080]();
  goto LABEL_93;
}
