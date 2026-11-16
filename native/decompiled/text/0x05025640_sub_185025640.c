// sub_185025640
// rva 0x05025640  size 1925  section .text  group text
// window base 0x185025640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185025640(
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
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned int v42; // edx
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdx
  unsigned __int64 v48; // r9
  __int64 v49; // rbx
  unsigned __int64 j; // r8
  int v51; // [rsp+0h] [rbp-98h] BYREF
  __int64 v52; // [rsp+8h] [rbp-90h]
  __int64 v53; // [rsp+10h] [rbp-88h]
  __int64 v54; // [rsp+18h] [rbp-80h]
  unsigned __int64 v55; // [rsp+20h] [rbp-78h]
  __int64 v56; // [rsp+28h] [rbp-70h]
  __int64 v57; // [rsp+30h] [rbp-68h]
  unsigned int v58; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v59; // [rsp+40h] [rbp-58h]
  unsigned int v60; // [rsp+44h] [rbp-54h]
  unsigned int v61; // [rsp+48h] [rbp-50h]
  unsigned int v62; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v63; // [rsp+50h] [rbp-48h]
  unsigned int v64; // [rsp+5Ch] [rbp-3Ch]
  unsigned int v65; // [rsp+60h] [rbp-38h]
  unsigned int v66; // [rsp+64h] [rbp-34h]
  unsigned int v67; // [rsp+68h] [rbp-30h]
  unsigned int v68; // [rsp+6Ch] [rbp-2Ch]
  unsigned int v69; // [rsp+70h] [rbp-28h]
  unsigned int v70; // [rsp+74h] [rbp-24h]
  __int64 v71; // [rsp+78h] [rbp-20h]
  int v72; // [rsp+84h] [rbp-14h]
  int v73; // [rsp+88h] [rbp-10h]
  int v74; // [rsp+8Ch] [rbp-Ch]
  __int64 v75; // [rsp+90h] [rbp-8h]

  v57 = a3;
  v56 = a5;
  v74 = a1;
  v55 = a2;
  v73 = a4;
  if ( (unsigned __int64)&v51 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v9 )
  {
    v11 = *(_DWORD *)(a5 + 8) >> 1;
    v72 = v11;
    v71 = 34082368;
    if ( (_DWORD)a4 != 0 )
    {
      v68 = a1;
      v54 = a6;
      LODWORD(v6) = a1;
      while ( 1 )
      {
LABEL_5:
        if ( v11 <= (int)v6 )
        {
          v65 = v6;
          v28 = v54;
          v29 = v68;
          goto LABEL_40;
        }
        v12 = *(unsigned __int16 *)(a5 + 2 * (int)v6 + 12);
        if ( v12 < 0xD800 )
        {
          v69 = *(unsigned __int16 *)(a5 + 2 * (int)v6 + 12);
          v67 = 1;
          v64 = v6;
          goto LABEL_10;
        }
        if ( v12 < 0xE000 )
        {
          v70 = *(unsigned __int16 *)(a5 + 2 * (int)v6 + 12);
          v64 = v6;
          v13 = sub_18501D060(a1: 0, a2, a3: a5, a4, a5: v6, a6: (unsigned int)v11);
          if ( v13 >= 0x10000 )
            JUMPOUT(0x30A04071ELL);
          v69 = v13;
          v67 = 1;
          goto LABEL_10;
        }
        while ( 1 )
        {
          v69 = v12;
          v67 = 1;
          v64 = v6;
LABEL_10:
          v14 = MEMORY[0x184F77860](a1, a2, a3: v57, a4, a5: v64, a6: v55);
          LODWORD(v6) = v68 + 1;
          LODWORD(v7) = 2 * v68;
          a2 = (int)(2 * v68);
          if ( (v14 & 0xFFFF0000) == 0 )
          {
            v70 = v68 + 1;
            v66 = v64 + v67;
            a4 = v54;
            *(_WORD *)(v54 + (int)v7 + 12) = v14;
            LODWORD(v6) = v66;
            v75 = v8;
            v68 = v70;
            v11 = v72;
            a5 = v56;
            goto LABEL_5;
          }
          v61 = v14;
          v63 = (int)v7;
          v62 = 2 * v68;
          v70 = v68 + 1;
          v66 = v64 + v67;
          v15 = v14 == -1
              ? MEMORY[0x184F777C0](a1, a2: (int)v7, a3: v57, a4: v64 + v67, a5: v64, a6: v55)
              : MEMORY[0x184F4B200](a1, a2: (int)v7, a3: v14);
          if ( v15 != v9 )
            break;
LABEL_81:
          MEMORY[0x182771080]();
LABEL_82:
          MEMORY[0x182771080]();
LABEL_83:
          MEMORY[0x182771080]();
LABEL_84:
          v43 = MEMORY[0x182771080]();
LABEL_85:
          v20 = MEMORY[0x182770E80](a1: v45, a2: v46, a3: v43, a4: v44, a5: v60);
LABEL_86:
          MEMORY[0x182770E80](a1: v22, a2: v23, a3: v20, a4: v21, a5: v60);
LABEL_87:
          MEMORY[0x182771220](a1: v64, a2, a3: (unsigned int)v7, a4, a5: (unsigned int)a4, a6: v67);
LABEL_88:
          MEMORY[0x182771220](a1: v61, a2, a3: (unsigned int)v7, a4, a5: (unsigned int)a4, a6: v69);
        }
        v53 = v15;
        a4 = *(unsigned int *)(v15 + 8);
        if ( (unsigned int)a4 <= v67 )
        {
          v18 = v54;
          goto LABEL_16;
        }
        LODWORD(v6) = v54;
        v59 = *(_DWORD *)(v15 + 8);
        if ( v54 == v9 )
          goto LABEL_83;
        v60 = a4 + (*(_DWORD *)(v54 + 8) >> 1) - v67;
        LODWORD(v7) = v60;
        v20 = sub_1850217A0(a1, a2, a3: v60, a4, a5: v16, a6: v17, a7: v51);
        if ( (v20 & 0x80000000) != 0 )
          goto LABEL_86;
        v24 = *(_QWORD *)(v10 + 40);
        v25 = (v20 + 19LL) & 0x1FFFFFFF8LL;
        if ( v25 >= 0x20000 || (v22 = v24 + v25, v24 + v25 > *(_QWORD *)(v10 + 32)) )
        {
          v58 = v20;
          v24 = MEMORY[0x181EAA840](a1: v22, a2: v23, a3: v71, a4: v21, a5: v20);
        }
        else
        {
          v26 = v71;
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
        v52 = v24;
        MEMORY[0x181EB4960](a1: 0, a2: v62, a3: v54, a4: v21, a5: 0, a6: v24);
        v18 = v52;
        a4 = v59;
LABEL_16:
        if ( (_DWORD)a4 != 0 )
        {
          v6 = v53;
          a2 = v63;
          *(_WORD *)(v18 + v63 + 12) = *(_WORD *)(v53 + 12);
          v7 = 1;
          v19 = v70;
          while ( (int)a4 > (int)v7 )
          {
            a2 = v19 + 1;
            if ( (unsigned int)a4 <= (unsigned int)v7 )
              goto LABEL_88;
            *(_WORD *)(v18 + (int)(2 * v19) + 12) = *(_WORD *)(v6 + 2 * v7 + 12);
            v7 = (unsigned int)(v7 + 1);
            ++v19;
          }
          LODWORD(v6) = v66;
          v68 = v19;
          v54 = v18;
          v11 = v72;
          a5 = v56;
        }
        else
        {
          LODWORD(v6) = v66;
          v54 = v18;
          v11 = v72;
          a5 = v56;
        }
      }
    }
    v70 = a1;
    v54 = a6;
    v33 = a1;
    while ( v11 > v33 )
    {
      v34 = 2 * v33;
      v35 = *(unsigned __int16 *)(a5 + v34 + 12);
      if ( (unsigned int)v35 < 0xD800 )
      {
        v69 = 1;
        v68 = v33;
        v36 = v35;
      }
      else if ( (unsigned int)v35 >= 0xE000 )
      {
        v69 = 1;
        v68 = v33;
        v36 = v35;
      }
      else
      {
        v67 = *(unsigned __int16 *)(a5 + v34 + 12);
        v68 = v33;
        v36 = sub_18501D060(a1: 0, a2: v35, a3: a5, a4, a5: v33, a6: (unsigned int)v11);
        if ( v36 >= 0x10000 )
          JUMPOUT(0x30A040A6BLL);
        v69 = 1;
      }
      v67 = v36;
      v37 = MEMORY[0x184F4C2E0](a1, a2: v35, a3: (unsigned int)v36);
      LODWORD(v6) = v70 + 1;
      LODWORD(v7) = 2 * v70;
      a2 = (int)(2 * v70);
      if ( (v37 & 0xFFFF0000) != 0 )
      {
        v64 = v37;
        v63 = (int)v7;
        v62 = 2 * v70;
        v66 = v70 + 1;
        v65 = v68 + v69;
        if ( v37 == -1 )
          v38 = MEMORY[0x184F4C160](a1, a2: (int)v7, a3: v67);
        else
          v38 = MEMORY[0x184F4B200](a1, a2: (int)v7, a3: v37);
        if ( v38 == v9 )
          goto LABEL_82;
        v53 = v38;
        a4 = *(unsigned int *)(v38 + 8);
        if ( (unsigned int)a4 > v69 )
        {
          LODWORD(v6) = v54;
          v61 = *(_DWORD *)(v38 + 8);
          if ( v54 == v9 )
            goto LABEL_84;
          v60 = a4 + (*(_DWORD *)(v54 + 8) >> 1) - v69;
          LODWORD(v7) = v60;
          v43 = sub_1850217A0(a1, a2, a3: v60, a4, a5: v39, a6: v40, a7: v51);
          if ( (v43 & 0x80000000) != 0 )
            goto LABEL_85;
          v47 = *(_QWORD *)(v10 + 40);
          v48 = (v43 + 19LL) & 0x1FFFFFFF8LL;
          if ( v48 >= 0x20000 || (v45 = v47 + v48, v47 + v48 > *(_QWORD *)(v10 + 32)) )
          {
            v59 = v43;
            v47 = MEMORY[0x181EAA840](a1: v45, a2: v46, a3: v71, a4: v44, a5: v43);
          }
          else
          {
            v49 = v71;
            *(_QWORD *)(v10 + 40) = v45;
            *(_QWORD *)v47 = v49;
            *(_DWORD *)(v47 + 8) = v43;
            *(_DWORD *)(v47 + 12) = 0;
            if ( v48 - 16 >= 0x800 )
            {
              memset((void *)(v47 + 16), 0, v48 - 16);
              v44 = 0;
            }
            else
            {
              for ( j = 16; v48 > j; j += 8LL )
                *(_QWORD *)(v47 + j) = 0;
            }
          }
          v52 = v47;
          MEMORY[0x181EB4960](a1: 0, a2: v62, a3: v54, a4: v44, a5: 0, a6: v47);
          v41 = v52;
          a4 = v61;
        }
        else
        {
          v41 = v54;
        }
        if ( (_DWORD)a4 != 0 )
        {
          v6 = v53;
          a2 = v63;
          *(_WORD *)(v41 + v63 + 12) = *(_WORD *)(v53 + 12);
          v42 = v66;
          v7 = 1;
          while ( (int)a4 > (int)v7 )
          {
            a2 = v42 + 1;
            if ( (unsigned int)a4 <= (unsigned int)v7 )
              goto LABEL_87;
            *(_WORD *)(v41 + (int)(2 * v42) + 12) = *(_WORD *)(v6 + 2 * v7 + 12);
            v7 = (unsigned int)(v7 + 1);
            ++v42;
          }
          v33 = v65;
          v70 = v42;
          v54 = v41;
          v11 = v72;
          a5 = v56;
        }
        else
        {
          v33 = v65;
          v54 = v41;
          v11 = v72;
          a5 = v56;
        }
      }
      else
      {
        v66 = v70 + 1;
        v65 = v68 + v69;
        a4 = v54;
        *(_WORD *)(v54 + (int)v7 + 12) = v37;
        v33 = v65;
        v75 = v8;
        v70 = v66;
        v11 = v72;
        a5 = v56;
      }
    }
    v65 = v33;
    v28 = v54;
    v29 = v70;
LABEL_40:
    v54 = v28;
    v68 = v29;
    result = sub_185021B40(a1, a2, a3: v28, a4: v28, a5: 0, a6: v29, a7: v51, a8: v52);
    if ( *(int *)(v10 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v31, a2: v32, a3: v68, a4: v54, a5: v65);
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_81;
}
